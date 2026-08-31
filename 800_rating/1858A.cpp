#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          long long a,b,c;
          cin >> a >> b >> c;

          
          // agar c odd hai toh anna k pass advantage hogi
          // bs uske pass b se jyda a ho toh winn hai uska
          if(c % 2 != 0){
               if(a >= b) cout << "First\n";
               else cout << "Second\n";
          }
          else{
               if(a > b) cout << "First\n";
               else cout << "Second\n";
          }
     }
}