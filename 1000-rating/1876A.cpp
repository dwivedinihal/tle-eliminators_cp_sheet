#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void f(){
    ll n, p;
    cin >> n >> p;

    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> b(n);
    for(ll i = 0; i < n; i++) cin >> b[i];

    // pair bna lo (b,a) ka kyuki jiska cost kum hai phele unko bolenge info share krne k liye
    vector<pair<ll, ll>> pp(n);
    for(ll i = 0; i < n;  i++){
        pp[i] = {b[i], a[i]};
    }

    // sort the pairs in the aseceding order of b
    sort(pp.begin(), pp.end());
    ll rem_share = n-1;
    ll cost = p;
    for(ll i = 0; i < n; i++){
        if(rem_share == 0 || pp[i].first >= p) break;
        ll share = min(rem_share, pp[i].second);
        cost += share * pp[i].first;
        rem_share -= share;
    }
    cost += rem_share * p;
    cout << cost << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        f();
    }
    return 0;
}