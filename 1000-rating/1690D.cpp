#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<char> s(n);
        for(int i = 0; i < n; i++) cin >> s[i];

        // solution
        // k size ki window chalao aur check kro ki kitne white hai uske andar
        // ans = k - white cnt
        int wc = 0;
        for(int i = 0; i < k; i++){
            if(s[i] == 'W') wc++;
        }
        int ans = wc;
        for(int j = k; j < n; j++){
            if(s[j-k] == 'W') wc--;
            if(s[j] == 'W') wc++;
            ans = min(ans, wc);
        }

        cout << ans << endl;
    }
}