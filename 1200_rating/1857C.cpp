#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;

    int m = n*(n-1)/2;
    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(b.begin(), b.end());
    int ptr = 0;
    for(int i = n-1; i >= 1; i--){
        cout << b[ptr] << " ";
        ptr += i;
    }
    cout << b[m-1] << " ";
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