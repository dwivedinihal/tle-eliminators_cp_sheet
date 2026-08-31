#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int n;
          cin >> n;

          int cntminus = 0;
          int cntplus = 0;
          for(int i = 0; i < n; i++){
               int x;
               cin >> x;
               if(x == -1) cntminus++;
               else cntplus++;
          }

          // solution
          int opr = 0;
          if(cntminus > n/2){
               int temp = cntminus - (n/2);
               opr += temp;
               cntminus -= temp;
          }
          if(cntminus % 2 != 0) opr += 1;

          cout << opr << endl;
     }
}