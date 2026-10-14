#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> b(n);
        for(int i = 0; i < n; i++) cin >> b[i];


        // solution
        long long curAns = 0;
        long long ans = 0;
        int maxB = b[0];
        for(int i = 0; i < n && i < k; i++){
            curAns += a[i];
            maxB = max(maxB, b[i]);
            int remK = k - (i+1);
            long long temp = curAns + (1LL * remK * maxB);
            ans = max(ans, temp);
        }

        cout << ans << endl;
    }
}