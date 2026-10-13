#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll w,h;
    cin >> w >> h;

    ll maxArea = 0;

    int k1; cin >> k1;
    vector<int> bpts(k1);
    for(int i = 0; i < k1; i++) cin >> bpts[i];
    ll baseBottom = bpts.back() - bpts[0];
    maxArea = max(maxArea, baseBottom*h);

    int k2; cin >> k2;
    vector<int> tpts(k2);
    for(int i = 0; i < k2; i++) cin >> tpts[i];
    ll basetop = tpts.back() - tpts[0];
    maxArea = max(maxArea, basetop*h);

    int k3; cin >> k3;
    vector<int> lpts(k3);
    for(int i = 0; i < k3; i++) cin >> lpts[i];
    ll baseleft= lpts.back() - lpts[0];
    maxArea = max(maxArea, baseleft*w);

    int k4; cin >> k4;
    vector<int> rpts(k4);
    for(int i = 0; i < k4; i++) cin >> rpts[i];
    ll baseright= rpts.back() - rpts[0];
    maxArea = max(maxArea, baseright*w);

    cout << maxArea << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}