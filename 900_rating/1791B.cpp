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

        // solution
        // initially wo (0,0) pr hai hume (1,1) taak jaana hai
        int r = 0;
        int c = 0;
        bool flag = false;
        for(char ch : s){
            if(ch == 'L') r--;
            else if(ch == 'R') r++;
            else if(ch == 'U') c++;
            else if(ch == 'D') c--;
            if(r == 1 && c == 1){
                flag = true;
                break;
            }
        }
        if(flag == true) cout << "yes\n";
        else cout << "no\n";
    }
}