#include<bits/stdc++.h>
using namespace std;

bool f(int idx, vector<int>& arr, int tar, vector<int>& curr){
     if(tar == 0) return true;

     if(idx < 0 || idx == arr.size()) return false;

     if(arr[idx] <= tar){
          curr.push_back(arr[idx]);

          if(f(idx, arr, tar - arr[idx], curr)) return true;
          curr.pop_back();
     }

     if(f(idx+1, arr, tar, curr)) return true;
     return false;
}
int main(){
     int t;
     cin >> t;

     while(t--){
          int n, k, x;
          cin >> n >> k >> x;

          if(k == 1 && x == 1){
               cout << "NO\n";
               continue;
          }

          // form the array of k values not including X in array
          vector<int> arr;
          for(int i = 1; i <= k; i++){
               if(i != x) arr.push_back(i);
          }

          // use combinatiom here to find that any combination of number result to N
          vector<int> curr; // used to store the values that gives sum = n
          if(f(0,arr,n,curr) == true){
               cout << "YES\n";
               cout << curr.size() << endl;
               for(int x : curr){
                    cout << x << " ";
               }
               cout << endl;
          }
          else cout << "NO\n";


     }
}