#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l,r;
        cin >> l >> r;
        int n = r-l+1;

        if(l > 0 || r < 0){
            cout << n-1 << endl;
            return;
        }
        int ts = (l+r) * n/2;
        if(ts >= l && ts <= r){
            cout << 0 << endl;
        }
        else{
            int a = -l;
            int b = r;
            cout << abs(a-b) - 1 << endl;
        }

}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}