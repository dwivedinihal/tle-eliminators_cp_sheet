#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool isP(ll x){
     string s = to_string(x);
     string revs = s;
     reverse(revs.begin(), revs.end());
     return revs == s;
}
int main(){
     int t;
     cin >> t;

     while(t--){
          ll n;
          cin >> n;

          ll r = n % 12;
          bool f = false;
          for(ll a = r; a <= n; a += 12){
               if(isP(a)){
                    ll b = n-a;
                    cout << a << " " << b << " " << endl;
                    f = true;
                    break;
               }
          }
          if(f == false) cout << -1 << endl;
     }
}