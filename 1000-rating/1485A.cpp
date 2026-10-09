#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll a, b;
        cin >> a >> b;

        // solution 
        if(a == 0){
            cout << 0 << endl;
            continue;
        }
        else{
            // hume ye dekhna hai ki b k kitne operations krne padenge jissae ki answer kum aaye
            // b max 30 taak jayega log(10^9) = 30 approx
            ll minOps = 1e18;
            ll startB = max(2LL, b);
            for(ll i = startB; i <= startB + 35; i++){
                ll currOps = i - b;
                ll tarA = a;

                while(tarA > 0){
                    tarA /= i;
                    currOps++;
                }

                minOps = min(minOps, currOps);
            }
            cout << minOps << endl;
        }
    }
}