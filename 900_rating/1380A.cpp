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

        // find the peak element
        bool f = false;
        int a,b,c;
        for(int i = 1; i < n-1; i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                f = true;
                a = i-1+1;
                b = i+1;
                c = i+1+1;
                break;
            }
        }

        if(f){
            cout << "YES\n";
            cout << a << " " << b << " " << c << endl;
        }
        else cout << "NO\n";
    }
}