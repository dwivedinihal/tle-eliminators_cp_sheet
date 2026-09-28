#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool f(vector<ll>& arr, ll c, ll m){
    ll n = arr.size();
    ll totalArea = 0;
    bool overflow = false;
    for(ll i = 0; i < n; i++){
        ll newSide = arr[i] + 2*m;
        // new side he overflow krgyi ya toh area c centimers se jyada aa rha 
        if(newSide > 2e9 || totalArea > c - (newSide * newSide)){
            overflow = true;
            break;
        }
        totalArea += newSide * newSide;
    }

    if(overflow || totalArea > c){
        return false;
    }
    else return true;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        ll n,c;
        cin >> n >> c;

        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) cin >> arr[i];

        // solution 
        // jab square mae w side ka border lagega toh new side = (si + 2w)
        // 2w -> left, right || top,bottom hoga toh double ho jayega
        // toh area = (si + 2w)^2
        
        ll l = 1;
        ll h = 1e9;
        ll ans = h;
        while(l <= h){
            ll m = l + (h-l) / 2;
            if(f(arr,c,m)){
                ans = m;
                l = m+1;
            }
            else h = m-1;
        }

        cout << ans << endl;
    }
}