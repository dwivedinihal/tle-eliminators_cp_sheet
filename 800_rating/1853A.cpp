#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int n;
          cin >> n;

          vector<int> arr(n);
          for(int i = 0; i < n; i++){
               cin >> arr[i];
          }

          // Use standard library to check if it's already sorted
          if (!is_sorted(arr.begin(), arr.end())) {
            cout << 0 << "\n";
            continue;
          }

          int mindiff = INT_MAX;
          for(int i = 1; i < n; i++){
               int x = arr[i] - arr[i-1];
               mindiff = min(mindiff, x);
          } 

          int opr = mindiff / 2 + 1;
          cout << opr << endl;
          
     }
}