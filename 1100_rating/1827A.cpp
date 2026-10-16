#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];

        vector<ll> b(n);
        for(ll i = 0; i < n; i++) cin >> b[i];

        // solution
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll ans = 1;
        ll mod = 1e9 + 7;
        bool f = false;
        for(int i = n-1; i >= 0; i--){
            auto it = upper_bound(a.begin(), a.end(), b[i]);
            ll cnt = a.end() - it;
            ll choices = cnt - (n-i-1);
            if(choices <= 0){
                f = true;
                break;
            }
            ans = (ans * choices) % mod;
        }
        if(f == true) cout << 0 << endl;
        else cout << ans << endl;

    }
}