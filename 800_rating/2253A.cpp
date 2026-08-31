#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(ll x){
     for(int i = 2 ; i <= x/2; i++){
          if(x % i == 0) return false;
     }
     return true;
}
int main(){
     int t;
     cin >> t;

     while(t--){
          ll n;
          cin >> n;

          if(isPrime(n+1)){
               cout << "Yes" << endl;
          }
          else cout << "No" << endl;
     }
}