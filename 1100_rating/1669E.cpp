#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<string> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        ll f[12] = {0};
        ll s[12] = {0};
        ll same[12][12] = {0};
        ll tp = 0;
        for(int i = 0; i < n; i++){
            int a = arr[i][0] - 'a';
            int b = arr[i][1] - 'a';

            tp += f[a];
            tp += s[b];
            tp -= 2 * same[a][b];

            f[a]++;
            s[b]++;
            same[a][b]++;
        }

        cout << tp << endl;
    }
}