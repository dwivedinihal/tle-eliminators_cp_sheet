#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin >> a >> b >> c;

    if((b-a) == 1 && (c-b) == 1 && (c-a) == 2) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}