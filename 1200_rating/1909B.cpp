#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];

    // solution
    int Dcnt = 0;
    set<ll> st; 
    ll k = 2;
    while(true){
        st.clear();
        for(int i = 0; i < n; i++){
            st.insert(arr[i] % k);
        }
        if(st.size() == 2) break;
        k *= 2;
    }

    cout << k << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}