#include<bits/stdc++.h>
using namespace std;

int main(){
    // Optimization for fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        map<int, vector<int>> mp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]].push_back(i+1);
        }

        vector<int> p(n+1);
        bool flag = false;
        for(auto  &it : mp){
            int m = it.second.size();
            if(m == 1){
                flag = true;
                break;
            }

            p[it.second[0]] = it.second[m-1];
            for(int i = 1; i < m; i++){
                p[it.second[i]] = it.second[i-1];
            }
        }

        if (flag) {
            cout << -1 << "\n";
        } else {
            for (int i = 1; i <= n; i++) {
                cout << p[i] << (i == n ? "" : " ");
            }
            cout << "\n";
        }
    }
    return 0;
}
