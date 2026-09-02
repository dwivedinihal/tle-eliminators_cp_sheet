#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int a,b;
          cin >> a >> b;

          int n;
          cin >> n;

          vector<int> arr(n);
          for(int i = 0; i <n; i++) cin >> arr[i];

          long long sum = b;
          for(int i = 0; i < n; i++){
               long long x = min(arr[i], a-1);
               sum += x;
          }
          cout << sum << endl;
     }
}