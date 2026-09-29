#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void f(){
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];

    // find the longest streak of every num in a , b;

    vector<ll> maxA(2*n+1, 0);
    ll curLen = 1;
    for(ll i = 1; i <= n; i++){
        if(i < n && a[i] == a[i-1]){
            curLen++;
        }
        else{
            maxA[a[i-1]] = max(maxA[a[i-1]], curLen);
            curLen = 1;
        }
    }

    vector<ll> maxB(2*n+1, 0);
    curLen = 1;
    for(ll i = 1; i <= n; i++){
        if(i < n && b[i] == b[i-1]){
            curLen++;
        }
        else{
            maxB[b[i-1]] = max(maxB[b[i-1]], curLen);
            curLen = 1;
        }
    }

    ll ans = 0;
    for(ll i = 1; i <= 2*n; i++){
        ans = max(ans, maxA[i] + maxB[i]);
    }

    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        f();
    }
    return 0;
}
