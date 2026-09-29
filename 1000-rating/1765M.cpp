#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll a = 1;
        for(ll x = 2; x*x <= n; x++){
            if(n % x == 0){
                a = n/x;
                break;
            }
        }
        
        cout << a << " " << n-a << endl;
    }
}