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

          bool f = false;
          for(int i = 0; i < n-1; i++){
               for(int j = i+1; j < n; j++){
                    int x = gcd(arr[i], arr[j]);
                    if(x <= (2)){
                         f = true;
                         break;
                    }
               }
               if(f) break;
          }
          if(f) cout << "YES\n";
          else cout << "NO\n";
     }
}