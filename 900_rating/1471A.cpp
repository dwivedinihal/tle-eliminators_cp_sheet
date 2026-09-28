#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n,x;
        cin >> n >> x;

        vector<ll> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        ll tsum = accumulate(arr.begin(), arr.end(), 0LL);
        ll maxi = 0;
        for(int i = 0; i < n; i++){
            maxi += (arr[i] + x - 1) / x; 
        }
        ll mini = (tsum + x - 1) / x;
        cout << mini << " " << maxi << endl;
    }
}