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
        int cnt = 0; // count krega ki last k kitte elements same hai continous order mae 
        int tar = arr[n-1];
        for(int i = n-1; i >= 0; i--){
            if(arr[i] == tar) cnt++;
            else break;
        }

        int opr = 0;
        // ab hum peeche se elements same krte chalenge
        // aur sab elements same honge toh unka cnt double ho jayega 
        while(cnt < n){
            opr++;
            cnt *= 2;

            // check krlo ki kahi adjacent element in left already tar k == hai toh operations kyu he perform krna
            while(n-cnt-1 >= 0 && arr[n-cnt-1] == tar){
                cnt++;
            }
        }

        cout << opr << endl;
    }
}