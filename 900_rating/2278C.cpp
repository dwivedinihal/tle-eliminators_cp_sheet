#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool f(vector<ll> &arr){
    for(int i = 1; i+1 <(int)arr.size(); i++){
        if(arr[i] >= 2) return true;
    }
    return false;
}
void solve(){
    int n;
    cin >> n;

    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    ll sum = accumulate(arr.begin(), arr.end(), 0LL);
    if(sum == n){
        cout << -1 << endl;
        return;
    }
    if(n == 2){
        cout << sum - 1 << endl;
        return;
    }

    if(f(arr)){
        cout << sum - 1 << endl;
        return;
    }
    cout << arr[0] + arr[n-1] - 1 << endl;;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}