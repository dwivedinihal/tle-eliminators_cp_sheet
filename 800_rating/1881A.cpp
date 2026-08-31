#include<bits/stdc++.h>
using namespace std;

int f(int n, int m, string &x, string &s){
     int maxi = max(n,m);
     int opr = 0;
     if(x.find(s) != string::npos){
          return 0; 
     }
     else{
          while(!(x.find(s) != string::npos )){
               x += x;
               opr++;
               if(x.size() > 3*(maxi)) return -1;
          }
     }
     return opr;

}
int main(){
     int t;
     cin >> t;

     while(t--){
          int n, m;
          cin >> n >> m;

          string x;
          cin >> x;

          string s;
          cin >> s;

          cout << f(n,m,x,s) << endl;
     }
}