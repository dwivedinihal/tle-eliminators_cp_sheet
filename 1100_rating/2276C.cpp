#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        // solution
        // har 1 index se phele sum ko modulu krlo aur uske rem ko store krlo
        // agar rem = 0 and length ko statisfy krta toh ans mae add krenge 
        vector<ll> p(n+1,0);
        ll curSum = 0;
        for(int i = 1; i <= n; i++){
            curSum += arr[i-1];
            p[i] = (curSum % k + k) % k;
        }

        // map ko use krenge jis sae ki hum cnt of rem dekh jaake humare valid window k andar
        map<ll,ll> validRem;
        ll ans = 0;
        for(int i = 1; i <= n; i++){
            // agar mera i mere length jo ki r-l+1 > k hai toh meri window valid ho jayegi
            // ab iss window k andar jo rem hai unke counts ko map mae store krdunga 
            if(i > k){
                int newRem = i-k-1;
                validRem[p[newRem]]++;
            }

            // agar current rem match krta hai widnow k inside k rem ko toh cnt + 1 krdo
            if(validRem.count(p[i])){
                ans += validRem[p[i]];
            }
        }

        cout << ans << endl;
    }
}