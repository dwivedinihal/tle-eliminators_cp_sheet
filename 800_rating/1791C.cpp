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
          if(s == "10" || s == "01"){
               cout << 0 << endl;
               continue;
          }

          if(s == "1" || s == "0"){
               cout << 1 << endl;
               continue;
          }


          int i = 0;
          int j = n-1;
          while(i <= j){
               if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')){
                    i++;
                    j--;
               } 
               else break;
          }

          cout << (j-i+1) << endl;
     }
}