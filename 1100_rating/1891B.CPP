#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;

    int q;
    cin >> q;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> qq;
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;

        if(qq.empty() || x < qq.back()) qq.push_back(x);
    }

    for(int i = 0; i < n; i++){
        for(int x : qq){
            if(arr[i] % (1 << x) == 0){
                arr[i] += (1 << (x-1));
            }
        }
    }

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}