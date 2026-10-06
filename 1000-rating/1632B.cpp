#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        // // genrate all the permutations 
        // vector<ll> arr(n);
        // iota(arr.begin(), arr.end(),0);
        // ll ans = LLONG_MAX;
        // vector<ll> bestP;

        // do{
        //     ll currXor = -1;
        //     for(int i = 0; i < n-1; i++){
        //         ll a = arr[i] ^ arr[i+1];
        //         if(a > currXor){
        //             currXor = a;
        //         }
        //     }    

        //     if(currXor < ans){
        //         ans = currXor;
        //         bestP = arr;
        //     }
        // }while(next_permutation(arr.begin(), arr.end()));

        // for(int x : bestP) cout << x << " ";
        // cout << endl;

        ll k = 1;
        while(k * 2 <= n-1){
            k = k * 2;
        }

        for(ll i = 1; i <= k - 1; i++) cout << i << " ";
        cout << 0 << " ";
        for(ll i = k; i < n; i++) cout << i << " ";
        cout << endl;
        
    }
}