#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;

    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        mp[a]++;
    }
    vector<int> ll, rr, mr;
    for(auto it : mp){
        int hh = it.first;
        int cnt = it.second;
        ll.push_back(hh);
        if(cnt >= 2){
            rr.push_back(hh);
        }
        for(int i = 2; i < cnt; i++){
            mr.push_back(hh);
        }
    }

    reverse(rr.begin(), rr.end());
    int k = ll.size() + rr.size();
    cout << k << endl;
    for(int x : ll) cout << x << " ";
    for(int x : mr) cout << x << " ";
    for(int x : rr) cout << x << " ";
    cout << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}