#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        int c2 = 0;
        while(n % 2 == 0){
            c2++;
            n /= 2;
        }

        int c3 = 0;
        while(n % 3 == 0){
            c3++;
            n /= 3;
        }

        if(c2 > c3) cout << -1 << endl;
        else if(n == 1) cout << 2*c3 - c2 << endl;
        else cout << -1 << endl;
    }
}