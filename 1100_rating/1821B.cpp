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
        int l = 0;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                l = i;
                break;
            }
        }

        int r = n-1;
        for(int i = n-1; i >= 0; i--){
            if(a[i] != b[i]){
                r = i;
                break;
            }
        }

        while(l > 0 && b[l-1] <= b[l]) l--;
        while(r < n-1 && b[r+1] >= b[r]) r++;

        cout << l+1 << " " << r+1 << endl;
    }
}