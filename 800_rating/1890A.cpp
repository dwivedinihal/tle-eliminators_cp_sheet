#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
     int t;
     cin >> t;

     while(t--){
          int n;
          cin >> n;

          vector<ll> arr(n);
          unordered_map<int,int> mp;
          for(int i = 0; i < n; i++){
               cin >> arr[i];
               mp[arr[i]]++;
          }

          if(n == 1){
               cout << "Yes\n";
               continue;
          }

          if(mp.size() > 2){
               cout << "NO\n";
               continue;
          }

          if(mp.size() == 1){
               cout << "Yes\n";
               continue;
          }

          if(mp.size() == 2){
               vector<int> x;
               for(auto &[ele,freq] : mp){
                    x.push_back(freq);
               }
               int a = x[0];
               int b = x[1];
               if(abs(b-a) <= 1){
                    cout << "Yes\n";
                    continue;
               }
               else cout << "NO\n";
          }

     }
}