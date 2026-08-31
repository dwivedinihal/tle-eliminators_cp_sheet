#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int n;
          cin >> n;

          int sum = 0;
          vector<int> arr(n-1);
          for(int i = 0; i < n-1; i++){
               cin >> arr[i];
               sum += arr[i];
          }
          // sum = -(sum);
          cout << -sum << endl;
     }
}