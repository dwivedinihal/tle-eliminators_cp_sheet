#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int n;
          cin >> n;

          string s;
          cin >> s;

          string t = "...";
          if(s.find(t) != string::npos){
               cout << 2 << endl;
               continue;
          }
          else{
               int ans = 0;
               for(int i = 0; i < n; i++){
                    if(s[i] == '.') ans++;
               }
               cout << ans << endl;
          }
     }
}