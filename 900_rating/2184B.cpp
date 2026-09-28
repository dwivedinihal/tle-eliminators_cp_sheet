#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll s,k,m;
        cin >> s >> k >> m;

        ll Flips = (m / k);
        ll timeSinceFlip = m % k;
        ll sandLeft = 0;
        if(Flips == 0 || Flips % 2 != 1){
            sandLeft = s;
        }
        else{
            sandLeft = min(s,k);
        }

        ll remSand = max(0LL, sandLeft - timeSinceFlip);
        cout << remSand << endl;
    }
}