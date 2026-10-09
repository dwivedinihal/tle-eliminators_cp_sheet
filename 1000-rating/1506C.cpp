#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string a;
        cin >> a;
        int n = a.length();

        string b;
        cin >> b;
        int m = b.length();

        // agar dono same hai 
        if(a == b){
            cout << 0 << endl;
            continue;
        }

        // // agar dono mae se koi substring ki trah present hai
        // else if(m < n){
        //     if(a.find(b) != string::npos){
        //         cout << n - m << endl;
        //         break;
        //     }
        // }

        // longest common substring find krloo dono string mae se 
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        int lcs = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i-1] == b[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                    lcs = max(lcs, dp[i][j]);
                }
                else dp[i][j] = 0;
            }
        }

        int ans = (n - lcs) + (m - lcs);
        cout << ans << endl;
    }
}