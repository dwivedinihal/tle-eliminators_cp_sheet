#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.size();
        bool flag = false;
        set<char> dc(s.begin(), s.end());
        int k = dc.size();
        vector<int> lastSeen(26,-1);
        for(int i = 0; i < n; i++){
            int cidx = s[i] - 'a';
            if(lastSeen[cidx] != -1){
                if(i - lastSeen[cidx] < k){
                    flag = true;
                    break;
                }
            }
            lastSeen[cidx] = i;
        }
        if(flag) cout << "NO\n";
        else cout << "YES\n";
    }
}
