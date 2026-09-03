#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int n;
          cin >> n;

          int cnt2 = 0;
          vector<int> arr(n);
          for(int i = 0; i < n; i++){
               cin >> arr[i];
               if(arr[i] == 2) cnt2++;
          }

          if(cnt2 % 2 != 0){
               cout << -1 << endl;
               continue;
          }

          int idx = 0;
          int temp = 0;
          int tar = cnt2/2;
          bool found = false;
          for(int i = 0; i < n; i++){
               if(arr[i] == 2) temp++;
               if(temp == tar){
                    idx = i+1;
                    found = true;
                    break;
               }
          }
          if(found) cout << idx << endl;
     }
}