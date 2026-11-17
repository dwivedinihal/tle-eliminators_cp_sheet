#include<bits/stdc++.h>
using namespace std;
void solve(){
    vector<string> arr(8);
    
    // Read the 8x8 grid
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < 8; i++){
        if(arr[i] == "RRRRRRRR"){
            cout << "R" << endl;
            return;
        }
    }
    cout << "B\n";
}
int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}