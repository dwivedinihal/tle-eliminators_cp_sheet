#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n, k, b, s;
        cin >> n >> k >> b >> s;

        ll minS = k * b;
        ll maxS = minS + n * (k-1);
        
        if(s < minS || s > maxS){
            cout << -1 << endl;
            continue;
        }

        ll remS = s - minS;
        vector<ll> ans(n,0);
        ans[0] = minS;

        for(ll i = 0; i < n; i++){
            ll add = min(remS , k - 1);
            ans[i] += add;
            remS -= add;
        }

        for(ll i = 0; i < n; i++){
            cout << ans[i] << " ";
        }

        cout << endl;
    }
}