#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
     int t;
     cin >> t;

     while(t--){
          ll a,b,c,d;
          cin >> a >> b >> c >> d;

          if(d < b || c > a + (d-b)) cout << -1 << endl;
          else{
               int upright_moves = (d-b);
               int left_moves = a + upright_moves - c;
               cout << upright_moves + left_moves << endl;
          }
     }
}