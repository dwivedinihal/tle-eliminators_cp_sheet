#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n, x;
        cin >> n >> x;

        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) cin >> arr[i];

        // solution 
        map<ll,ll> divisors;
        for(ll i = 0; i < n; i++){
            ll g = __gcd(arr[i], x);
            if(g > 1){
                for(ll d = 1; d *d <= g; d++){
                    if(g % d == 0){
                        divisors[d] += arr[i];
                        if(d*d != g){
                            divisors[g/d] += arr[i];
                        }
                    }
                }
            }
        }

        ll ans = 0;
        for(auto &it : divisors){
            if(it.first > 1){
                ans = max(ans, it.second);
            }
        }

        cout << ans << endl;
    }
}