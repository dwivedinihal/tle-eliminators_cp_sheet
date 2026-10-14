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
        // ll maxSum = arr[0];
        // for(int i = 0; i < n; i++){
        //     ll prev = arr[i];
        //     ll sum = arr[i];
        //     maxSum = max(maxSum, sum);
        //     for(int j = i+1; j < n; j++){
        //         ll curr = arr[j];
        //         bool prev_is_odd = (abs(prev) % 2 != 0);
        //         bool curr_is_odd = (abs(curr) % 2 != 0);
        //         // if both the alternate elements are of opposite parity
        //         if(prev_is_odd != curr_is_odd){
        //             sum += curr;
        //             maxSum = max(maxSum, sum);
        //             prev = curr;
        //         }
        //         else break;
        //     }
        // }

        // cout << maxSum << endl;


        // solution -> kadane + sliding window use krenge
        ll maxAns = arr[0];
        ll sum = arr[0];
        for(int i = 1; i < n; i++){
            bool pOdd = (abs(arr[i-1]) % 2 != 0);
            bool cOdd = (abs(arr[i]) % 2 != 0);
            // if both the adjacent elements having same parity then reset the sum = 0 & sum < 0 same as kadane's algo
            if(pOdd == cOdd) sum = 0;
            if(sum < 0) sum = 0;
            sum += arr[i];
            maxAns = max(maxAns, sum);
        }

        cout << maxAns << endl;
    }
}