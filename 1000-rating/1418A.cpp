#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll x, y, k;
        cin >> x >> y >> k;

        // solution 
        // find the total number of sticks required
        // 1 stick already hai
        // k sticks torches bnane k liye, k * y coal lene k liye 
        ll totalStickNeed = k + (k * y);

        // extra kitne need hai sticks ki, -1 isliye kyuki 1 toh hai apne pass already
        ll extraNeed = totalStickNeed - 1;

        // offer 1 ko kitne times trade krna padega totalSticks ko achieve krne k liye
        // yha x-1 isliye kiya kyuki, exchange k time 1 stick loss hoga aur x milegi toh total (x-1) hogya
        ll trade1 = (extraNeed + (x-1) - 1) / (x-1);
        ll trade2 = k;

        ll total = trade1 + trade2;

        cout << total << endl;
    }
}