#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
     int n;
     cin >> n;

     vector<ll> arr(n);
     for(int i = 0; i < n; i++) cin >> arr[i];

     ll sum = accumulate(arr.begin(), arr.end(), 0LL);

     if(sum % 3 != 0){
          cout << 0 << endl;
          return 0;
     }

     ll t1 = sum / 3;
     ll t2 = t1 * 2;
     ll ans = 0;
     ll cnt = 0;
     ll currPrefix = 0;
     for(int i = 0; i < n-1; i++){
          currPrefix += arr[i];

          // If we find a valid ending point for the second part,
          // it can pair with any valid starting point found.
          if(currPrefix == t2){
               ans += cnt;
          }

          // cnt how many valid starting point having sum = t1
          if(currPrefix == t1){
               cnt++;
          }
     }

     cout << ans << endl;
}