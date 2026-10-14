#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        // solution
        // inital cnt = 1 hoga kyuki humese input string valid he hogi
        int cnt = 1;
        int n = s.size();
        bool Badd = false;
        bool Bremove = false;

        for(int i = 1; i < n-1; i++){
            // agar 3 lagatar same char aajaye toh compress krke unko single mae krdo, cnt++;
            if(s[i-1] == s[i] && s[i] == s[i+1]) Badd = true;
            // agar do same char k beech mae 1 unique element hai toh beech wale ko change krdo , aur 3 same bna do 
            if(s[i-1] == s[i+1] && s[i] != s[i-1]) Bremove = true;
        }

        if(Badd) cnt++;
        if(Bremove) cnt++;

        cout << cnt << endl;
    }
}