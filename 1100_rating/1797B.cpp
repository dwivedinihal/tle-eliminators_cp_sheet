#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<vector<int>> arr(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++) cin >> arr[i][j];
        }

        // solution -> 0 based index le raha hu mae
        // 1 new matrix bna lo jo 180 degree rotated ho
        // then rotated or original wali ko match krwa lenge jaha change waha opeation lga denge 

        vector<vector<int>> temp(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int val = arr[i][j];
                int nr = (n-i-1);
                int nc = (n-j-1);
                temp[nr][nc] = val;
            }
        }

        int moves = 0;
        bool flag = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int v1 = arr[i][j];
                int v2 = temp[i][j];
                if(v1 != v2){
                    moves++;
                } 
            }
        }
        moves = moves/2;

        if(moves > k) cout << "NO\n";
        else{
            int remMoves = k - moves;
            if(n % 2 != 0 || remMoves % 2 == 0){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
    }
}