#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(int n, vector<ll> &arr){
    ll g1 = 0;
        ll g2 = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0) g1 = __gcd(g1, arr[i]);
            else g2 = __gcd(g2, arr[i]);
        }

        bool ok1 = true;
        for(int i = 1; i < n; i += 2){
            if(arr[i] % g1 == 0){
                ok1 = false;
                break;
            }
        }
        if(ok1){
            cout << g1 << endl;
            return;
        }

        bool ok2 = true;
        for(int i = 0; i < n; i += 2){
            if(arr[i] % g2 == 0){
                ok2 = false;
                break;
            }
        }

        if(ok2){
            cout << g2 << endl;
            return;
        }

        cout << 0 << endl;
}
int main(){
    int t;
    cin >> t;


    while(t--){
        int n;
        cin >> n;

        vector<ll> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        solve(n,arr);

    }
}