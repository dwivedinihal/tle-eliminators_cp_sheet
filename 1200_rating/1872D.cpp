#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// ll process(vector<int>& arr, int x, int y){
//     ll sumX = 0, sumY = 0;
//     for(int i = 1; i<= arr.size(); i++){
//         if(i % x == 0) sumX += arr[i-1];
//         if(i % y == 0) sumY += arr[i-1];
//     }
//     ll res = sumX - sumY;
//     return res;
// }
ll f(ll L, ll R){
    if(L > R) return 0;
    return (L+R) * (R-L+1)/2; 
}
void solve(){
    ll n,x,y;
    cin >> n >> x >> y;

    // // generate all the permutations and find the maxSum among all the permutations
    // vector<int> curr(n);
    // iota(curr.begin(), curr.end(), 1);
    // ll maxSum = LLONG_MIN;
    // do{
    //     ll val = process(curr, x, y);
    //     maxSum = max(maxSum, val);
    // }while(next_permutation(curr.begin(), curr.end()));

    // cout << maxSum << endl;

    ll cntX = n/x;
    ll cntY = n/y;

    ll lcm = (x / std::__gcd(x, y)) * y;
    ll cntBoth = n/lcm;
    cntX -= cntBoth;
    cntY -= cntBoth;
    ll sumX = f(n-cntX+1, n);
    ll sumY = f(1,cntY);
    cout << sumX - sumY << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}