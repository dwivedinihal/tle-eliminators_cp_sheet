#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool comp(const pair<ll, int>& a, const pair<ll, int>& b){
    return a.first > b.first;
}
void solve(){
    int n;
    cin >> n;

    vector<ll> a(n), b(n), c(n);
    vector<pair<ll,int>> s1(n), s2(n), s3(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s1[i] = {a[i], i};
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
        s2[i] = {b[i], i};
    }
    for(int i = 0; i < n; i++){
        cin >> c[i];
        s3[i] = {c[i], i};
    }

    // sare pairs ko sort krdo descending order mae with their index
    sort(s1.begin(), s1.end(), comp);
    sort(s2.begin(), s2.end(), comp);
    sort(s3.begin(), s3.end(), comp); 

    ll maxSum = -1;
    pair<ll,int> b1, b2, b3;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                int idx1 = s1[i].second;
                int idx2 = s2[j].second;
                int idx3 = s3[k].second;
                if(idx1 != idx2 && idx2 != idx3 && idx3 != idx1){
                    ll curSum = s1[i].first + s2[j].first + s3[k].first; 
                    if(curSum > maxSum){
                        maxSum = curSum;
                        b1 = s1[i];
                        b2 = s2[j];
                        b3 = s3[k];
                    }
                }
            }
        }
    }

    cout << maxSum << endl;
    return;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}