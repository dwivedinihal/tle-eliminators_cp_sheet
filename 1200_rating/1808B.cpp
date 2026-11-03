#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> arr[i][j];
    }

    long long ans = 0;
    for(int j = 0; j < m; j++){
        // for(int i = 0; i < n; i++){
        //     for(int k = i+1; k < n; k++){
        //         ans += abs(arr[i][j] - arr[k][j]);
        //     }
        // }

        vector<int> cols(n);
        for(int i = 0; i < n; i++)  cols[i] = arr[i][j];

        sort(cols.begin(), cols.end());

        for(int i = 0; i < n; i++){
            ans += 1LL * cols[i] * (2 * i - n + 1);
        }
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}