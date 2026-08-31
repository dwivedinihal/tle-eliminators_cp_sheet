#include<bits/stdc++.h>
using namespace std;
bool isSort(vector<int>& arr){
     int n = arr.size();
     for(int i = 0; i < n-1; i++){
          if(arr[i] > arr[i+1]) return false;
     }
     return true;
}
int main(){
     int t;
     cin >> t;

     while(t--){
          int n, k;
          cin >> n >> k;

          vector<int> arr(n);
          for(int i = 0; i < n; i++) cin >> arr[i];

          if(k >= 2) {
               cout << "YES" << endl;
               continue;
          }
          if(isSort(arr)) cout << "YES" << endl;
          else cout << "NO" << endl;
     }
}