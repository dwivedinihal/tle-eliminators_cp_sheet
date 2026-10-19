#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> arr(n);
        int nc = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] < 0) nc++;
            arr[i] = abs(arr[i]);
        } 

        ll sum = accumulate(arr.begin(), arr.end(), 0LL);
        sort(arr.begin(), arr.end());

        if(nc % 2 == 0) cout << sum << endl;
        else{
            sum -= 2*arr[0];
            cout << sum << endl;
        }

        // solution
        
    }
}