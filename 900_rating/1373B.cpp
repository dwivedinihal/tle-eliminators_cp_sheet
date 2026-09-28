#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int ones = 0;
        int zeros = 0;
        for(char c : s){
            if(c == '0') zeros++;
            else ones++;
        }

        int tm = min(ones, zeros);
        if(tm % 2 != 0) cout << "DA\n";
        else cout << "NET\n";
    }
}