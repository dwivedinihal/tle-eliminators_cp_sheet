#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<string> arr(n-2);
        for(int i = 0; i < n-2; i++) cin >> arr[i];
        

        // solution
        // agar meri bigram adjacent char alaag hai toh string mae add krdo 
        // aur agar different hai toh directly dono bigram ko add krdo, beech ka already miss ho rha hota hai
        // agar differnt hai toh last mae koi bhi char add krdo, last wlaa bigram apne aap miss ho jayega
        string ans = arr[0];
        bool flag = false;
        for(int i = 0; i < n-3; i++){
            string a = arr[i];
            string b = arr[i+1];
            if(a[1] == b[0]) ans += b[1];
            else if(a[1] != b[0]){
                ans += b;
                flag = true;
            }
        }
        if(flag == false) ans += 'a';
        cout << ans << endl;
    }
}