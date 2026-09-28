#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool comp(const pair<int,int>& a, const pair<int,int>& b){
    if(a.first != b.first) return a.first > b.first;
    return a.second < b.second;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        ll n,k;
        cin >> n >> k;

        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];

        vector<pair<int,int>> pp;
        for(int i = 0; i < n; i++){
            int x = a[i] % k;
            if(x == 0) x = k;
            pp.push_back({x,i+1});
        }

        sort(pp.begin(), pp.end(), comp);

        for(int i = 0; i < n; i++){
            cout << pp[i].second << " ";
        }
        cout << endl;
    }
}