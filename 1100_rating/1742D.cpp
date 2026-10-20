#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n+1);
        vector<int> maxIdx(1001,0);
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
            maxIdx[arr[i]] = i;
        }

        // int maxi = -1;
        // for(int i = 0; i < n; i++){
        //     for(int j = i; j < n; j++){
        //         int a = arr[i];
        //         int b = arr[j];
        //         if(__gcd(a,b) == 1){
        //             int len = i+1 + j+1;
        //             maxi = max(maxi, len);
        //         }
        //     }
        // }
        int maxi = -1;
        for(int i = 1; i <= 1000; i++){
            if(maxIdx[i] == 0) continue;
            for(int j = 1; j <= 1000; j++){
                if(maxIdx[j] == 0) continue;
                if(__gcd(i,j) == 1){
                    maxi = max(maxi, maxIdx[i] + maxIdx[j]);
                }
            }
        }
        cout << maxi << endl;
    }
}