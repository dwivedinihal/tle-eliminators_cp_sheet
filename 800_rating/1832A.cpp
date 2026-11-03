#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;

    set<char> leftChar;
    for(int i = 0; i < s.length()/2; i++) leftChar.insert(s[i]);
    if(leftChar.size() < 2){
        cout << "No\n";
        return;
    }
    else{
        cout << "YES\n";
        return;
    }
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}