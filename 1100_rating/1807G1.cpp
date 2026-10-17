#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> c(n);
        for(int i = 0; i < n; i++) cin >> c[i];

        // solution
        // initally array A mae 1 de rkha hai 
        // phele c ko sort krdo, chote se aage badhnege 
        // aur agar mera C ka koi element mere currSum se bada hogya iska mltb mae usko kabhi bna he nhi paunga
        // waha se direct no krdo, 
        long long cSum = 1; // initally 1 toh hai apne pass
        sort(c.begin(), c.end());
        /// agar first element he 1 nhi hua toh khel khtm wahi 
        if(c[0] != 1) cout << "No\n";
        else{
        bool flag = false;
        for(int i = 1; i < n; i++){
            if(c[i] > cSum){
                flag = true;
                break;
            }
            cSum += c[i];
        }

        if(flag == true) cout << "NO\n";
        else cout << "YES\n";
    }
    }
}