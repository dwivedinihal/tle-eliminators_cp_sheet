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

          vector<int> p(n,0);
          if(arr[0] == 0) p[0] = 1;
          for(int i = 1; i < n; i++){
               if(arr[i] == 0) p[i] = p[i-1] + 1;
          }

          int maxGap = *max_element(p.begin(), p.end());
          cout << maxGap << endl;
     }
}