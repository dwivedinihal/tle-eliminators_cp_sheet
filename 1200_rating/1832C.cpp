#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // calculate the contrast
    long long con = 0;
    for(int i = 0; i < n-1; i++){
        int a = arr[i];
        int b = arr[i+1];
        int val = abs(a-b);
        con += val;
    }

    // if contrast == 0, then it means all elements are equal and we are given with questioon 
    // that the array of 1 size contrast is 0, so B can contain any element of A and its size is 1 so contrast 0
    if(con == 0){
        cout << 1 << endl;
        return;
    }
    vector<int> unq;
    for(int i = 0; i < n; i++){
        if(unq.empty() || unq.back() != arr[i]) unq.push_back(arr[i]);
    }

    if(unq.size() == 1){
        cout << 1 << endl;
        return;
    }

    int ans = 2; // include 1st and last element
    for(int i = 1; i < unq.size()-1; i++){
        if((unq[i] > unq[i-1] && unq[i] > unq[i+1]) || (unq[i] < unq[i-1] && unq[i] < unq[i+1])) ans++;
    }

    cout << ans << endl;
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