#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int ans = 0;
          for(int i = 0; i < 10; i++){
               string s;
               cin >> s;

               for(int j = 0; j < 10; j++){
                    if(s[j] == 'X'){
                    int dtop = i;
                    int dbottom = 9-i;
                    int dleft = j;
                    int dright = 9-j;

                    int mini = min({dtop, dbottom, dleft, dright}) + 1;
                    ans += mini;
                    }
               }
          }
          cout << ans << endl;
     }
}