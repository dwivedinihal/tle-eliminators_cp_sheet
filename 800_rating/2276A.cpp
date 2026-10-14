#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        // solution 
        if(b >= a){
            cout << -1 << endl;
            continue;
        } 
        else{
            int k = a - b;
            int ans = min(b, k);
            cout << ans << endl;
        }
    }
}