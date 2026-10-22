#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> b(n);
        for(int i = 0; i < n; i++) cin >> b[i];


        // solution
        // a array mae sirf largest element rakhunga 
        // b array smallest value rakhunga 
        for(int i = 0; i < n; i++){
            if(a[i] < b[i]) swap(a[i], b[i]);
        }

        // dono arrays ka max nikal lumga aur ans = x * y
        int x = *max_element(a.begin(), a.end());
        int y = *max_element(b.begin(), b.end());

        long long ans = x * y;
        cout << ans << "\n";
    }
}