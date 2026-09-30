#include<bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O taaki koi TLE ka chance na rahe
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        
        if (c == 'g') {
            cout << 0 << "\n";
            continue; // <-- FIX: return 0 ki jagah continue use kiya taaki agla testcase chal sake
        }

        int maxi = 0;
        int next_idx = -1;
        string temp = s + s;
        for(int i = 2*n-1; i >= 0; i--){
            if(temp[i] == 'g'){
                next_idx = i;
            }
            if(i < n && temp[i] == c){
                maxi = max(maxi, next_idx-i);
            }
        }
        cout << maxi << "\n"; // '\n' use karna endl se faster hota hai
    }
    return 0;
}
