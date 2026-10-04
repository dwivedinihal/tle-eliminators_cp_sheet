#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }

        // solution
        // hum sare elements ki frequnecy ko store kra lenge
        // aur koshish krenge ki jo element max hai wo jyada times MODE mae participate kree
        // MAX element sbse aage uske baad chote unique element ko lga denge
        vector<int> res;
        while(true){
            vector<int> currR;
            for(auto &it : mp){
                if(it.second > 0){
                    currR.push_back(it.first);
                    it.second--;
                }
            }

            if(currR.empty()) break;

            sort(currR.rbegin(), currR.rend());

            for(int x : currR) res.push_back(x);
        }
        
        for(int i : res) cout << i << " ";
        cout << endl;
    }
}