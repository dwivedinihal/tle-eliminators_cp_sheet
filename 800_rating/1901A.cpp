#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int n, x;
          cin >> n >> x;

          vector<int> arr(n);
          for(int i = 0; i < n; i++) cin >> arr[i];

          vector<int> maxi;
          maxi.push_back(arr[0] - 0);
          for(int i = 1; i < n; i++){
               int k = arr[i] - arr[i-1];
               maxi.push_back(k);
          }
          int p = 2 * (x - arr[n-1]);
          maxi.push_back(p);

          int ans = *max_element(maxi.begin(), maxi.end());
          cout << ans << endl;
     }
}