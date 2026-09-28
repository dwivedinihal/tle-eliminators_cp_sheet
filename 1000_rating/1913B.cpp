#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int zero = 0;
        int ones = 0;
        for(char c : s){
            if(c == '0') zero++;
            else ones++;
        }

        int x = 0;
        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            if(c == '1'){
                if(zero > 0){ 
                    zero--;
                    x++;
                }
                else break;
            }
            else{
                if(ones > 0){
                    ones--;
                    x++;
                }
                else break;
            }
        }

        cout << s.length() - x << endl;
    }
}