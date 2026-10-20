#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,c;
        cin >> n >> c;

        vector<long long> arr(n);
        vector<long long> cost(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            cost[i] = arr[i] + (i+1);
        }

        sort(cost.begin(), cost.end());
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(c >= cost[i]){
                c -= cost[i];
                cnt++;
            }
            else break;
        }

        cout << cnt << endl;
    }
}