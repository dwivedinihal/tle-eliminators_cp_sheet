#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<vector<int>> arr(n);
        for(int i = 0; i < n; i++){
            int m;
            cin >> m;

            arr[i].resize(m);
            for(int j = 0; j < m; j++) cin >> arr[i][j];
        }

        // solution
        // global minimum ko toh add krna he padega, 
        // baaki to 2 smallest bhi nikal lo
        // phir usmae se jo 2 largest honge usko pick krlo

        // global minimum ko utha lo 
        int Gmini = INT_MAX;
        int Smin2 = INT_MAX;
        ll total_min2_sum = 0;
        for(int i = 0; i < n; i++){
            int mini = INT_MAX;
            int min2 = INT_MAX;
            for(int j = 0; j < arr[i].size(); j++){
                int x = arr[i][j];
                if(x < mini){
                    min2 = mini;
                    mini = x;
                }
                else if(x < min2) min2 = x;
            }

            Gmini = min(Gmini, mini);
            Smin2 = min(Smin2, min2);
            total_min2_sum += min2;
        }

        ll beauty = total_min2_sum - Smin2 + Gmini;
        cout << beauty << endl;
    }
}