#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = (s[0] == 'B');
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]) ans++;
    }
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