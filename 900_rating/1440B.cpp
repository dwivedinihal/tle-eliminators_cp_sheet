#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<ll> arr(n*k);
        for(int i = 0; i < n*k; i++) cin >> arr[i];

        // solution 
        // if we have to divide the array in n = 2 len k segments
        ll step = n - (n+1) / 2+1;
        ll idx = n*k - step;
        ll maxi = 0;
        for(int i = 0; i < k; i++){
            maxi += arr[idx];
            idx -= step;
        }
        cout << maxi << endl;
    }
}