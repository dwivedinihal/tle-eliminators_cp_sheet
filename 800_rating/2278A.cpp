#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;

    string nn;
    cin >> nn;

    string dd;
    cin >> dd;

    int c1[26] = {0};
    int c2[26] = {0};
    for(char c : nn){
        if('a' <= c && c <= 'z') c1[c - 'a']++;
        else if('A' <= c && c <= 'Z') c1[towlower(c) - 'a']++;
    }
    for(char c : dd){
        if('a' <= c && c <= 'z') c2[c - 'a']++;
        else if('A' <= c && c <= 'Z') c2[towlower(c) - 'a']++;
    }

    bool ok = true;
    for(int i = 0; i < 26; i++){
        if(c2[i] > c1[i]){
            ok = false;
            break;
        }
    }
    if(!ok){
        cout << "NO\n";
        return;
    }

    int rem[26] = {0};
    for(int i = 0; i < 26; i++){
        rem[i] = c1[i] - c2[i];
    }

    bool temp = true;
    for(int i = 0; i < 26; i++){
        int need = 0;
        if(i == 's' - 'a' || i == 'i' - 'a' || i == 'x' - 'a') need = 1;
        if(rem[i] != need){
            temp = false;
            break;
        }
    }

    if(temp){
        cout << "YES\n";
    }
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