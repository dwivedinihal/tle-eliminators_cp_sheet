#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){

        ll n,k,q;
        cin >> n >> k >> q;

        vector<ll> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        // solution 
        // longest segment dhundho jismae temp <= q ho
        ll L = 0;
        ll tw = 0;
        for(ll i = 0; i < n; i++){
            if(arr[i] <= q) L++;
            else{
                if(L >= k){
                    ll x = L - k + 1;
                    tw += (x * (x + 1)) / 2;
                }
                L = 0;
            }
        }
        if(L >= k){
            ll x = L - k + 1;
            tw += (x * (x + 1)) / 2;
        }

        cout << tw << endl;
    }
}