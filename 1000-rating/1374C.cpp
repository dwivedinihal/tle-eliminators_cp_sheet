#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int bal = 0;
        int maxDip = 0;
        for(char c : s){
            if(c == '(') bal++;
            else if(c == ')') bal--;
            if(bal < 0) maxDip = max(maxDip, abs(bal));
        }

        cout << maxDip << endl;
    }
}