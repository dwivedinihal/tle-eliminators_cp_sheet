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

          if(is_sorted(arr.begin(), arr.end()) == true){
               cout << "Yes\n";
               continue;
          }

          bool swaped = true;
          while(swaped){
               swaped = false;

               for(int i = 1; i < n-1; i++){
               if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
                    swap(arr[i], arr[i+1]);
                    swaped = true;
               }
          }
          }

          if(is_sorted(arr.begin(), arr.end()) == true){
               cout << "Yes\n";
          }
          else cout << "NO\n";
          
     }
}