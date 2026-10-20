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

        // // make the matrix first
        // vector<vector<ll>> arr(n+1, vector<ll>(n+1));
        // for(ll i = 1; i <= n; i++){
        //     for(ll j = 1; j <= n; j++){
        //         ll temp = (i * j) % mod;
        //         arr[i][j] = temp;
        //     }
        // }

        // // find the maxPath sum when two types of jumps you can i.e right or down
        // vector<vector<ll>> dp(n+1, vector<ll>(n+1,0));
        // for(ll i = 1; i <= n; i++){
        //     for(ll j = 1; j <= n; j++){
        //         if(i == 1 && j == 1) dp[i][j] = arr[i][j];
        //         else if(i == 1) dp[i][j] = dp[i][j-1] % mod + arr[i][j] % mod;
        //         else if(j == 1) dp[i][j] = dp[i-1][j] % mod + arr[i][j] % mod;
        //         else dp[i][j] = (max(dp[i-1][j], dp[i][j-1]) + arr[i][j]) % mod;
        //     }
        // }

        // ll ans = dp[n][n] % mod;
        // ll nAns = (ans * 2022) % mod;
        // cout << (nAns % mod) << endl;

/*
    For example, for n = 3, the optimal path visits:
    (1,1) -> (1,2) -> (2,2) -> (2,3) -> (3,3)
    
    The total demodogs killed: 
    (1*1) + (1*2) + (2*2) + (2*3) + (3*3)
    
    This can be broken down into two summation series:
    1. Perfect squares: 1^2 + 2^2 + 3^2 + ... + n^2
    2. Adjacent products: (1*2) + (2*3) + ... + (n-1)*n
    
    Using algebraic identities, the sum of this exact path simplifies to:
    ans = [ n * (n + 1) * (2n + 1) ] / 6  +  [ (n - 1) * n * (n + 1) ] / 3
    
    When you combine these fractions and multiply by 2022, it simplifies beautifully:
    2022 * ans = 2022 * [ n * (n + 1) * (4n - 1) ] / 6
               = 337 * n * (n + 1) * (4n - 1)
*/


        ll term1 = n % mod;
        ll term2 = (n + 1) % mod;
        ll term3 = (4 * n - 1) % mod;

        // 2022 / 6 = 337. Multiply everything systematically.
        ll ans = 337;
        ans = (ans * term1) % mod;
        ans = (ans * term2) % mod;
        ans = (ans * term3) % mod;

        cout << ans << "\n";
    }
}