#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll getDist(pair<ll,ll> &a, pair<ll,ll> &b){
    return abs(a.first - b.first) + abs(a.second - b.second);
}

void solve(){
    ll n,k,a,b;
    cin >> n >> k >> a >> b;

    // 0 based idx krdo
    a--;
    b--;

    vector<pair<ll,ll>> city(n);
    for(int i = 0; i < n; i++){
        cin >> city[i].first;
        cin >> city[i].second;
    }
    // agar direct flight pass paade toh wahi choose krlo na
    ll ans = getDist(city[a],city[b]);

    // agar 2 se jyada city hai toh try kro ki A,B k pas jo major city hai waha jao
    if(k > 0){
        ll minA = 4e18;
        ll minB = 4e18;

        for(int i = 0; i < k; i++){
            minA = min(minA, getDist(city[a], city[i]));
            minB = min(minB, getDist(city[b], city[i]));
        }
        ans = min(ans, minA + minB);
    }

    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}