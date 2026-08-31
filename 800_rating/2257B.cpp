#include<bits/stdc++.h>
using namespace std;

int f(int n, int m, vector<int>& a, vector<int>& b){
     // int bidx = 0;
     // int vidx = 0;

     // while(true){
     //      // phele bea ki turn hai
     //      // agar start mae he 0 hai toh bea ki aage baari he nhi ayegi, khel wahi khtm
     //      if(bidx == n-1 && a[bidx] == 0) return 2;

     //      // throw bomb to ver
     //      if(b[vidx] > 0) b[vidx]--;

     //      // check krlo jump toh nhi krna usko next mountain pr
     //      if(bidx + 1 < n && a[bidx + 1] > a[bidx]) bidx++;

     //      // ab ver ki turn
     //      // same sare steps iske liye bhi repeat krdo
     //      if(vidx == m-1 && b[vidx] == 0) return 1;
     //      if(a[bidx] > 0) a[bidx]--;
     //      if(vidx + 1 < m && b[vidx + 1] > b[vidx]) vidx++;
     // }


     int Amove = a[0] + n - 1;
     int Bmove = b[0] + m - 1;
     if(Amove >= Bmove) return 1;
     else if(Bmove > Amove) return 2;
}

int main(){
     int t;
     cin >> t;

     while(t--){
          int n, m;
          cin >> n >> m;

          vector<int> a(n);
          for(int i = 0; i < n; i++) cin >> a[i];

          vector<int> b(m);
          for(int i = 0; i < m; i++) cin >> b[i];

          // FIX: Added << "\n" to print each answer on a new line
          cout << f(n,m,a,b) << "\n"; 
     }
     
     // FIX: Added return statement for main function
     return 0; 
}
