#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> arr(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int mini = 1;
    int maxi = n;
    int l = 1;
    int r = n;

    while(l < r){
        if(arr[l] == mini){
            mini++;
            l++;
        }
        else if(arr[l] == maxi){
            maxi--;
            l++;
        }
        else if(arr[r] == mini){
            mini++;
            r--; 
        }
        else if(arr[r] == maxi){
            maxi--;
            r--;
        }
        else{
            cout << l << " " << r << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
