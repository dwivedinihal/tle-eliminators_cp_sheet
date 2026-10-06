#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long x,y;
        cin >> x >> y;

        long long a = x-2*y;
        if(a % 3 == 0 && x >= 2 * y && x >= -4 * y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}