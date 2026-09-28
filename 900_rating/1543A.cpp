#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll a,b;
        cin >> a >> b;

        if(a == b){
            cout << 0 << " " << 0 << endl;
        }
        else{
            ll exict = abs(a-b);
            ll p = a % exict;
            ll q = b % exict;
            cout << exict << " ";
            if(p == q){
                cout << min(p, exict - q) << endl;
            }
            else{
                cout << min(a,b) << endl;
            }
        }
    }
}