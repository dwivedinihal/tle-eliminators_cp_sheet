#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        ll x; cin >> x;

        vector<vector<ll>> st(3, vector<ll>(n));
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                cin >> st[i][j];
            }
        }

        ll curr = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                ll val = st[i][j];
                if((val | x) == x){
                    curr = curr | val;
                }
                else break;
            }
        }

        if(curr == x) cout << "yes\n";
        else cout << "no\n";
    }
}