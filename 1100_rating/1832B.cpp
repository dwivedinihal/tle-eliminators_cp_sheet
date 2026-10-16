#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) cin >> arr[i];

        // solution
        // we have 2 choice operations to perfom
        // either delete the 2 minimum elements in 1 operation
        // either delete the single maximum element in 1 operation
        // its optimal to choose the operations whick make less loss in overall sum

        sort(arr.begin(), arr.end());
        ll sum = 0;
        vector<ll>p(n+1,0);
        for(ll i = 0; i < n; i++) p[i+1] = p[i] + arr[i];

        for(int i = 0; i <= k; i++){
            int Dleft = 2*i;
            int Dright = k-i;

            int left = Dleft;
            int right = n - Dright;

            ll cSum = p[right] - p[left];
            sum = max(sum, cSum);

        }
        cout << sum << endl;
    }
}