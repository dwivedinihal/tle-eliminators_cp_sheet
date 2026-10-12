#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> b(n);
        set<int> seen;
        bool flag = false;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(seen.count(b[i])){
                flag = true;
            }
            seen.insert(b[i]);
        }
        if(flag){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}