#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int f(int x){
    int sum = 0;
    while(x > 0){
        sum += x % 10;
        x = x/10;
    }
    return sum;
}
void solve(){
    ll x;
    cin >> x;

    if(x % 9 != 0) {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;
    for(ll y = x; y <= x + 95; y++){
        if(y - f(y) == x) cnt++;
    }

    cout << cnt << endl;
    return;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}