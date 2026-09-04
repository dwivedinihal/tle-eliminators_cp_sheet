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

          int i = 0;
          int j = n-1;
          int opr = 0;
          while(i < j){
               while(i < j && s[i] == '0') i++;
               while(i < j && s[j] == '1') j--;

               if(i < j){
                    opr++;
                    swap(s[i], s[j]);
                    i++;
                    j--;
               }
          }
          cout << opr << endl;
     }
}