#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int n;
          cin >> n;

          int total_xor = 0;
          for(int i = 0; i < n; i++){
               int x;
               cin >> x;
               total_xor ^= x;
          }

          if(n % 2 != 0) cout << total_xor << endl;
          else{
               if(total_xor == 0){
                    cout << 0 << endl;
               }
               else cout << -1 << endl;
          }
     }
}