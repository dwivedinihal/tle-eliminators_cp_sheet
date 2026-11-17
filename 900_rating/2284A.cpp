#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;

    int a = n/2;
    int b = n % 2 != 0 ? n/2+1 : n/2;
    ll ans = a * b;
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}