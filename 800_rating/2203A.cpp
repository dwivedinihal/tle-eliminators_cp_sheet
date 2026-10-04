#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,m,d;
        cin >> n >> m >> d;

        int maxTower = (d/m) + 1;
        int ans = (n + maxTower - 1) / maxTower;
        cout << ans << endl; 
    }
}