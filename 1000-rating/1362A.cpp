#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll a, b;
    cin >> a >> b;

    // solution 
    // agar a > b toh swap krdo, chote se upaar jaane mae easy hoga
    // 2 ki powers mae reprst kro B ko 

    if(a > b) swap(a,b);
    if(a == b){
        cout << 0 << endl;
        return;
    }
    if(b % a != 0){
        cout << -1 << endl;
        return;
    }
    
    ll rem = b/a;
    ll p = 0;

    while(rem % 2 == 0){
        p++;
        rem /= 2;
    }

    if(rem != 1){
        cout << -1 << endl;
        return;
    }

    ll moves = (p / 3) + ((p % 3) / 2) + ((p % 3) % 2);
    cout << moves << endl;
            
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}