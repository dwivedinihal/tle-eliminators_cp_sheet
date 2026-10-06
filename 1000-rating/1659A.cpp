#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,r,b;
        cin >> n >> r >> b;

        int grps = b + 1;

        int baseGrpSize = r / grps;
        int remGrps = r % grps;

        string res = "";
        for(int i = 0; i < grps; i++){
            int currGrp = baseGrpSize + (i < remGrps ? 1 : 0);
            res.append(currGrp, 'R');
            if(i < b){
                res.push_back('B');
            }
        }

        cout << res << endl;
    }
}