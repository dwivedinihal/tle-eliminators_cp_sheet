#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> arr(n);
        int Ncnt = 0;
        int Zcnt = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] < 0) Ncnt++;
            else if(arr[i] == 0) Zcnt++;
        }

        if(Ncnt % 2 != 0 || Zcnt > 0){
            cout << 0 << endl;
            continue;
        }
        else{
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }

    }
}