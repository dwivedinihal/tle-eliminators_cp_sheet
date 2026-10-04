#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        char c;
        cin >> c;

        string s;
        cin >> s;

        int i = 0;
        int j = n-1;
        int moves = 0;

        while(i < j){
            char c1 = s[i];
            char c2 = s[j];
            if(c1 == c2){
                i++; 
                j--;
            }
            else if(c1 != c2){
                if(c1 == c || c2 == c) moves++;
                else moves += 2;
                i++;
                j--;
            }
        }
        cout << moves << endl;
    }
}