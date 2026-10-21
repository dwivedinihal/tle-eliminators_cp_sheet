#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());
        int i = 0;
        int j = 1;
        bool f = false;
        while(j < n){
            int d = abs(arr[i] - arr[j]);
            if(d == k){
                f = true;
                break;
            }
            else if(d < k) j++;
            else i++;
            if(i == j) j++;
        }

        if(f) cout << "yes\n";
        else cout << "no\n";
    }
}