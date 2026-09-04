#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int n;
          cin >> n;

          int maxi = INT_MIN;
          int mini = INT_MAX;
          for(int i = 0; i < n; i++){
               int x;
               cin >> x;
               maxi = max(maxi,x);
               mini = min(mini,x);
          }

          int k = (maxi + 1) - (mini);
          cout << k << endl;
     }
}