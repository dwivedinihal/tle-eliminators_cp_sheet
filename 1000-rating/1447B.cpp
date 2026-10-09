#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<vector<int>> arr(n, vector<int>(m));
        int sum = 0;
        int maxi = INT_MAX;
        int cntZero = 0;
        int cntNeg = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> arr[i][j];
                if(arr[i][j] == 0) cntZero++;
                if(arr[i][j] < 0) cntNeg++;
                sum += (abs(arr[i][j]));
                maxi = min(maxi, abs(arr[i][j])); 
            } 
        }

        // sokution if the count of (-) is odd it means total sum;
        if(cntNeg % 2 == 0) cout << abs(sum) << endl;
        else if(cntNeg % 2 != 0 && cntZero > 0) cout << abs(sum) << endl;
        else if(cntNeg % 2 != 0 && cntZero == 0) cout << (sum - 2 * maxi) << endl;
    }
}