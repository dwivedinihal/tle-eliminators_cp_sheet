#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        // solution
        vector<ll> pref(n,0);
        pref[0] = arr[0];
        for(int i = 1; i < n; i++){
            pref[i] = pref[i-1] + arr[i];
        }

        vector<ll> suff(n,0);
        suff[n-1] = arr[n-1];
        for(int i = n-2; i >= 0; i--){
            suff[i] = suff[i+1] + arr[i];
        }

        int i = 0;
        int j = n-1;
        int maxi = 0;
        while(i < j){
            if(pref[i] == suff[j]){
                maxi = max(maxi, i+1 + n-j);
                i++;
                j--;
            }
            else if(pref[i] < suff[j]) i++;
            else if(suff[j] < pref[i]) j--;
        }

        cout << maxi << endl;
    }
}