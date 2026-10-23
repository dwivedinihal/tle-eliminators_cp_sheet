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

        bool hasR = false;
        bool hasB = false;
        bool f = false;
        for(int i =0; i < n; i++){
            if(s[i] == 'W'){
                if((!hasR && hasB) || (hasR && !hasB)){
                    f = true;
                    break;
                }
                hasR = false;
                hasB = false;
            }
            else{
                if(s[i] == 'R') hasR = true;
                if(s[i] == 'B') hasB = true;
            }
        }

        if(f == true){
            cout << "NO\n";
            continue;
        }
        // Check the final segment after the loop ends
        if ((hasR && !hasB) || (!hasR && hasB)) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}