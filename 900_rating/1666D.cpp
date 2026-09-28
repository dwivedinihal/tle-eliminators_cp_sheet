#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s,t;
        cin >> s >> t;

        unordered_map<char,int> mpt;
        for(char c : t) mpt[c]++;

        unordered_map<char,int> mps;
        for(char c : s) mps[c]++;


        string res = "";
        for(char c : s){
            // agar char ki need hai target mae
            if(mpt.count(c)){
                // agar char ki freq jyada hai needed se toh delete krdo unhe
                if(mps[c] > mpt[c]) mps[c]--;
                // wrna char ko add krdo res mae
                else res += c;
            }
            else mps[c]--;
        }

        if(res == t) cout << "YES\n";
        else cout << "NO\n";
    }
}