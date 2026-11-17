#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // solution
    vector<ll>powers(n);
    for(int i = 0; i < n; i++){
        powers[i] = (1LL << arr[i]);
    }
    sort(powers.rbegin(), powers.rend());

    ll x = 0;
    ll y = 0;
    for(ll a : powers){
        if(x <= y) x += a;
        else y += a;
    }

    cout << x * y << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}