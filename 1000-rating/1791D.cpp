#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void f(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    // build the prefix array
    vector<int> p(n,0);
    set<char> st1;
    for(int i = 0; i < n; i++){
        char c = s[i];
        if(st1.find(c) == st1.end()){
            if(i == 0) p[i] = 1;
            else p[i] = p[i-1] + 1;
            st1.insert(c);
        }
        else p[i] = p[i-1];
    }

    // build the suffix array
    vector<int> suff(n,0);
    set<char> st2;
    for(int i = n-1; i >= 0; i--){
        char c = s[i];
        if(st2.find(c) == st2.end()){
            if(i == n-1) suff[i] = 1;
            else suff[i] = suff[i+1] + 1;
            st2.insert(c);
        }
        else suff[i] = suff[i+1];
    }

    int maxi = 0;
    for(int i = 0; i < n-1; i++){
        maxi = max(maxi, p[i] + suff[i+1]);
    }
    
    cout << maxi << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        f();
    }
    return 0;
}