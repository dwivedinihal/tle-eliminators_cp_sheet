#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int> arr(n);
    int freq[105] = {0}; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int extra = 0;
    for(int i = 0; i <= n; i++){
        if(freq[i] == 0){
            cout << i << endl;
            return;
        }

        int curr = extra + freq[i];
        if(curr < k){
            cout << i << endl;
            return;
        }
        extra = curr - k;
    }

    

    // // ab hum saare mex values ko try krenge ki kis kis ko hum create kr skte hai
    // // MEX = 1 chahiye → Toh ek aisa group chahiye jiska maximum 0 ho.
    // // MEX = 2 chahiye → Toh do groups chahiye: ek ka max 0 ho aur dusre ka max 1 ho.
    // // MEX = 3 chahiye → Toh teen groups chahiye: max 0, max 1, aur max 2 wale.

    // int curMex = 0;
    // int availElments = 0;
    // while(true){
    //     // Agar hamare paas current_mex wala number hi nahi hai, 
    //     // toh hum aisa koi group nahi bana sakte jiska max current_mex ho.
    //     if (freq[current_mex] == 0) {
    //         break;
    //     }
    //     availElments += mp[curMex];
    //     if(availElments >= k){
    //         availElments -= k;
    //         curMex++;
    //     }
    //     else break;
    // }

    // cout << curMex << endl;

}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}