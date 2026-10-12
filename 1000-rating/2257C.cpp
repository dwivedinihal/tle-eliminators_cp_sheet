#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct traid
{
    int startPos;
    ll loveVal;
    int k1, k2, k3;
};

void solve(){
    int n;
    cin >> n;

    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++) cin >> arr[i];

    // generate all the traids of 3 size with alternate elements i.e x0, x2, x4 or x1, x3, x5
    vector<traid> pairs;
    for(int i = 1; i <= n-4; i++){
        int a = i;
        int b = i+2;
        int c = i+4;

        ll val = arr[a] + arr[b] - arr[c];

        pairs.push_back({i,val,a,b,c});
    }


    // sort the pairs according to love value
    sort(pairs.begin(), pairs.end(), [](const traid &x, const traid &y){
        return x.loveVal < y.loveVal;
    });


    // ab is portion ko optimize kro kyuki abhi humm saare pairs ko check kr rhe jo O(n^2) de rha hai 
    // // ab aise pairs find kro jinka love value same ho aur keys overlap na kare;
    // ll cnt = 0;
    // for(int i = 0; i+1 < pairs.size(); i++){

    //     int idx1 = pairs[i].startPos;
    //     ll val1 = pairs[i].loveVal;
        
    //     for(int j = i+1; j < pairs.size(); j++){

    //         int idx2 = pairs[j].startPos;
    //         ll val2 = pairs[j].loveVal;

    //         if(val1 != val2) break;

    //         bool isOverlap = false;
    //         // Change && to || because a difference can be 2 OR 4
    //         if (abs(idx1 - idx2) == 2 || abs(idx1 - idx2) == 4) isOverlap = true;
    //         if(!isOverlap) cnt++;
    //     }
    // }

    // cout << cnt << endl;

    // optimization
    // ab hum saare love values and uske related pairs ko map mae store krenge
    // map  -> {loveValue, related pairs} -> {long long, vector<int>}
    // ab har 1 love value k liye uske related pairs ko check krenge jo non overlapping hue to cnt ko ++ krdenge 

    unordered_map<ll, vector<int>> mp;
    for(int i = 0; i < pairs.size(); i++){
        ll loveValue = pairs[i].loveVal;
        int pos = pairs[i].startPos;
        mp[loveValue].push_back(pos);
    }

    // ab traversal start krdo mitaar
    ll cnt = 0;
    for(const auto& it : mp){
        vector<int> relatedPairs = it.second;
        ll m = relatedPairs.size();
        if(m <= 1) continue;

        // agar hum sare pairs ko consider kre valid toh 
        cnt += m * (m-1) / 2;

        // ab 1 set bnalo jismae saare pairs ko push krdo aur find krlo overlap wale pairs ko
        unordered_set<int> positions(relatedPairs.begin(), relatedPairs.end());
        
        // ab aise postions ko substrct krdo jo overlap kr rhe hai
        for(int idx : positions){
            if(positions.count(idx+2)) cnt--;
            if(positions.count(idx + 4)) cnt--;
        }
    }

    cout << cnt << endl;

    // // Print all generated triads
    // cout << "Generated Triads:\n";
    // for (const auto& t : pairs) {
    //     cout << "Triad at x=" << t.startPos 
    //          << " | Keys: {" << t.k1 << ", " << t.k2 << ", " << t.k3 << "}"
    //          << " | Love Value: " << t.loveVal << "\n";
    // }
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}