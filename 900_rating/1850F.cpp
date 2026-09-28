#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> arr(n+1,0);
        for(ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            if(x <= n) arr[x]++;
        }

        vector<ll> tc(n+1, 0);
        for(ll i = 1; i <= n; i++){
            if(arr[i] == 0) continue;
            for(ll j = i; j <= n; j+=i) tc[j] += arr[i];
        }

        ll tf = 0;
        for(ll i = 1; i <= n; i++){
            if(tc[i] > tf){
                tf = tc[i];
            }
        }
        cout << tf << endl;
    }
}