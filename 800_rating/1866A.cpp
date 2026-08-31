#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin >> n;

     int mini = INT_MAX;
     vector<int> arr(n);
     for(int i = 0; i < n; i++){
          cin >> arr[i];
          int d = abs(0-arr[i]);
          mini = min(mini, d);
     }
     
     cout << mini << endl;
}