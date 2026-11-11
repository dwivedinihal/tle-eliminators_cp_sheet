#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // find the element with maximum factors present in array
    int maxCnt = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            //if(i != j){
                int a = arr[i];
                int b = arr[j];
                if(b % a == 0) cnt++;
            //}
        }
        maxCnt = max(maxCnt, cnt);
    }

    if(maxCnt == 0) cout << n-1 << endl;
    else cout << n - maxCnt << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}