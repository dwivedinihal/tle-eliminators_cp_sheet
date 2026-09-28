#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n , k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int minOps = k;
        int ec = 0;
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0) ec++;
            int rem = a[i] % k;
            int ops = (rem == 0) ? 0 : (k - rem);
            minOps = min(minOps, ops);
            if(k == 4){
                int ops2 = max(0, 2-ec);
                minOps = min(minOps, ops2);
            }
        }

        cout << minOps << endl;
    }
}