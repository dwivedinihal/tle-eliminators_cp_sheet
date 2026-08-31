#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int n;
          cin >> n;

          int k;
          cin >> k;

          bool f = false;
          vector<int> arr(n);
          for(int i = 0; i < n; i++){
               cin >> arr[i];
               if(arr[i] == k) f = true;
          }

          if(f == true) cout << "Yes\n";
          else cout << "NO\n"; 
     }
}