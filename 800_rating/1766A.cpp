#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          string n;
          cin >> n;

          int len = n.length();
          int first_digit = n[0] - '0';

          int ans = (len - 1) * 9 + first_digit;
          cout << ans << endl;
     }
}