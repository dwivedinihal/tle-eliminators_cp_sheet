#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n,l,r;
        cin >>n >> l >> r;

        bool flag = false;
        vector<int> ans;
        for(int i = 1; i <= n; i++){
            int x = ((l + i - 1) / i) * i;
            if(x <= r) ans.push_back(x);
            else if(x > r){
                flag = true;
                break;
            }
        }
        if(flag == true) cout <<"NO\n";
        else{
            cout << "YES\n";
            for(int i = 0; i < n; i++) cout << ans[i] << " ";
            cout << endl;
        }
    }
}