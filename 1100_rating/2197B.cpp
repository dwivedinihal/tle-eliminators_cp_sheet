#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> per(n+1);
    vector<int> posPer(n+1);
    for(int i = 1; i <= n; i++){
        cin >> per[i];
        posPer[per[i]] = i;
    }

    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++) cin >> arr[i];

    vector<int> Foccur(n+1,-1);
    vector<int> Loccur(n+1,-1);
    for(int i = 1; i <= n; i++){
        int val = arr[i];
        if(Foccur[val] == -1) Foccur[val] = i;
        Loccur[val] = i;
    }

    for(int x = 1; x <= n; x++){
        if(Foccur[x] == -1) continue;
        int L = Foccur[x];
        int R = Loccur[x];
        int OrgPos = posPer[x];
        if(OrgPos < L || OrgPos > R){
            cout << "NO\n";
            return;
        }
        for(int i = L; i <= R; i++){
            if(arr[i] != x){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES\n";
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}