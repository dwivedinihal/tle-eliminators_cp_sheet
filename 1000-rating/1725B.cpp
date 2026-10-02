#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    ll D; // Changed to ll to match problem bounds safely
    cin >> D;

    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // solution
    sort(arr.begin(), arr.end());
    ll ans = 0;
    int l = 0;
    int r = n-1;
    while(l <= r){
        ll mp = arr[r];
        ll k = (D/mp) + 1;
        if((r-l+1) >= k){
            ans++;
            r--;
            l += (k-1);
        }
        else break;
    }

    cout << ans << "\n";
    return 0;
}
