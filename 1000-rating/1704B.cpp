#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n, x;
        cin >> n >> x;

        ll lmin = LLONG_MAX;
        ll lmax = LLONG_MIN;
        int ans = 0;
        ll a;
        for(ll i = 0; i < n; i++){
            cin >> a;
            lmin = min(lmin, a);
            lmax = max(lmax, a);
            if(lmax - lmin > 2 * x){
                ans++;
                lmin = a;
                lmax = a;
            }
        }

        cout << ans << endl;
    }
}