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
        for(int i = 0; i < n; i++) cin >> arr[i];

        // solution 
        ll ans = 0;
        for(int i = 0; i < n/2; i++){
            ll diff = abs(arr[i] - arr[n-1-i]);
            ans = __gcd(ans, diff);
        }

        cout << ans << endl;
    }
}