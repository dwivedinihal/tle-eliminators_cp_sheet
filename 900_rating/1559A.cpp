#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll>arr(n);
        for(ll i = 0; i < n; i++) cin >> arr[i];

        ll ans = arr[0];
        for(ll i = 1; i < n; i++){
            ans &= arr[i];
        }

        cout << ans << endl;
    }
}