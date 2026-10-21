#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];


        // solution
        int ans = -1;
        vector<int> notPos;
        for(int i = 0; i < n; i++){
            // agar element apni jagah pr nhi hai toh usko and krdo prev aise elemet se jo apni jagah pr nhi hai
            // aur agar 1st time koi number mil rha aisa toh usko ans mae store krlo simple se
            if(i != arr[i]){
                if(ans == -1) ans = arr[i];
                else ans = ans & arr[i];
            }
        }
        cout << ans << endl;
    }
}