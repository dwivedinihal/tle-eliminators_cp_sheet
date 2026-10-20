#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        // make the matrix first
        vector<vector<ll>> arr(n+1, vector<ll>(n+1));
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= n; j++){
                ll temp = (i * j) % mod;
                arr[i][j] = temp;
            }
        }

        // find the maxPath sum when two types of jumps you can i.e right or down
        vector<vector<ll>> dp(n+1, vector<ll>(n+1,0));
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= n; j++){
                if(i == 1 && j == 1) dp[i][j] = arr[i][j];
                else if(i == 1) dp[i][j] = dp[i][j-1] % mod + arr[i][j] % mod;
                else if(j == 1) dp[i][j] = dp[i-1][j] % mod + arr[i][j] % mod;
                else dp[i][j] = (max(dp[i-1][j], dp[i][j-1]) + arr[i][j]) % mod;
            }
        }

        ll ans = dp[n][n] % mod;
        ll nAns = (ans * 2022) % mod;
        cout << (nAns % mod) << endl;
    }
}