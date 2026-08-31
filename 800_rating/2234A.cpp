#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int n;
          cin >> n;

          vector<int> arr(n);
          for(int i = 0; i < n; i++) cin >> arr[i];

          // solution
          sort(arr.rbegin(), arr.rend());

          bool poss = true;
          for(int i = 0; i < n-2; i++){
               if(arr[i] % arr[i+1] != arr[i+2]){
                    poss = false;
                    break;
               }
          }

          if(arr[n-1] <= 0){
               cout << -1 << endl;
               continue;
          }

          if(poss){
               cout << arr[0] << " " << arr[1] << endl;
          }
          else cout << -1 << endl;
     }
}