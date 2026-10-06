#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

         vector<pair<ll, ll>> arr(n);
        for(ll i = 0; i < n; i++){
            cin >> arr[i].first;
            arr[i].second = i + 1; // hum index ko isliye store kr rhe hai jisse ki end mae plcing find krte time easily index access krpaye
        }

        // solution
        // jis building ko sbse jyada baar visit krna hai usko hum owner k pass rakhenge 
        // jisae hume kum distance cover krna ho
        // jisko kum times visit krna hai usko door bhi rkh skte hai kyuki jaane ki cost kum times lagegi

        sort(arr.rbegin(), arr.rend());
        ll x0 = (n+1)/2;
        ll totalDistance = 0;

        vector<ll> placing(n+1);
        placing[0] = x0; //  Owner (building 0) is placed at center coordinate x0
        ll l = x0-1;
        ll r = x0+1;
        for(ll i = 0; i < n; i++){
            ll freq = arr[i].first; // how many times we have to visit a particular building
            ll original_id = arr[i].second; // Get original building ID

            if(i % 2 == 0){
                // jinko jyada visit krna hai unko left ya ass pass place kro x0 k 
                placing[original_id] = l;
                l--;
            }
            else{
                placing[original_id] = r;
                r++;
            }
        }

        for(ll i = 0; i < n; i++){
            ll freq = arr[i].first;
            ll original_id = arr[i].second;
            ll a = 2 * abs(x0 - placing[original_id]) * freq;
            totalDistance += a;
        }

        cout << totalDistance << endl;
        for(int x : placing) cout << x << " ";
        cout << endl;
        
    }
}