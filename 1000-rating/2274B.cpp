#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        ll maxAns = arr[0];
        ll minS = arr[0];
        ll maxS = arr[0];

        for(int i = 1; i < n; i++){
            ll v1 = arr[i] + maxS;
            ll v2 = arr[i] + minS;
            ll v3 = arr[i];
            ll v4 = arr[i] - maxS;
            ll v5 = arr[i] - minS;

            maxAns = max({v1,v2,v3,v4,v5,maxAns});

            ll s1 = arr[i];
            ll s2 = maxS + arr[i];
            ll s3 = minS + arr[i];
            ll s4 = 2 * maxS + arr[i];
            ll s5 = 2 * minS + arr[i];

            maxS = max({s5, s1, s2, s3, s4});
            minS = min({s5, s1, s2, s3, s4});
        }

        cout << maxAns << endl;
    }
}