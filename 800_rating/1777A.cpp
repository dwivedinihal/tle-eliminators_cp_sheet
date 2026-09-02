#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin >> t;

     while(t--){
          int n;
          cin >> n;

          vector<int> arr(n);
          for(int i = 0; i < n; i++) cin >> arr[i];

          // solution 
          stack<int> st;
          st.push(arr[0]);
          int opr = 0;
          for(int i = 1; i <n; i++){
               int a = st.top();
               int b = arr[i];
               if((a % 2 != 0 && b % 2 != 0) || (a % 2 == 0 && b % 2 == 0)){
                    st.pop();
                    st.push(a*b);
                    opr++;
               }
               else st.push(arr[i]);
          }

          cout << opr << endl;
     }
}