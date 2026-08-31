#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
     int t;
     cin >> t;

     while(t--){
          vector<ll> arr(3);
          cin >> arr[0] >> arr[1] >> arr[2];
          sort(arr.begin(), arr.end());
          // a, b, a+b
          ll a = arr[0];
          ll b = arr[1];
          ll c = arr[2];
          
          ll r1 = c - a;
          ll r2 = (a+b) - (a);
          cout << min(r1,r2) << endl;
     }
     return 0;
}