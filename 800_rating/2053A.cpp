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

          bool check = false;
          for(int i = 0; i < n-1; i++){
               int a = arr[i];
               int b = arr[i+1];
               int mini = min(a,b);
               int val = 2*mini;
               if(val > max(a,b)){
                    check = true;
                    break;
               }
          }

          if(check == true) cout << "Yes" << endl;
          else cout << "No" << endl;
     }
}