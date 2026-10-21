#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        vector<string> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        for(int j = 0; j < m; j++){
            int dr = n-1;
            for(int i = n-1; i >= 0; i--){
                if(arr[i][j] == 'o') dr = i - 1;
                else if(arr[i][j] == '*'){
                    arr[i][j] = '.';
                    arr[dr][j] = '*';
                    dr--;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
        cout << arr[i] << "\n";
        }
    }
}