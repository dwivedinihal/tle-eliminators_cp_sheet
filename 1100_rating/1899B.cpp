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
        vector<ll> p(n+1,0);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            p[i+1] = p[i] + arr[i];
        }

        // solution

        // // jab k = 1 
        // ll maxDiff = LLONG_MIN;
        // for(int i = 1; i < n; i++){
        //     ll x = arr[i] - arr[i-1];
        //     maxDiff = max(x, maxDiff);
        // }

        ll ans = 0;

        for(int k = 1; k <= n; k++){
            if(n % k == 0){
                ll minVal = 1e18;
                ll maxVal = -1;

                for(int i = 0; i < n; i += k){
                    ll curVal = p[i+k] - p[i];
                    maxVal = max(maxVal, curVal);
                    minVal = min(minVal, curVal);
                }
                ans = max(ans, maxVal - minVal);
            }
        }
        cout << ans << endl;
    }
}