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

        // solution
        ll sum = accumulate(arr.begin(), arr.end(), 0LL);
        ll curr = 0;
        ll maxi = 0;
        for(int i = 0; i < n-1; i++){
            curr += arr[i];
            ll remSum = sum - curr;
            maxi = max(maxi, __gcd(curr, remSum));
        }

        cout << maxi << endl;
    }
}