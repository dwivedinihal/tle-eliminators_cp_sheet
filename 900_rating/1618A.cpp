#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;

    while(t--){
        vector<ll> arr(7);
        for(int i = 0; i < 7; i++) cin >> arr[i];

        // solution
        // as given in the question that the array is sorted it means the element at the end is = sum of all elements
        // so we will try to find subsequence where sum = b[n] and size of 3
        // hence problem is converted into to find the 3sum problem

        ll tar = arr[6];
        int n = 7;
        bool flag = false;
        vector<ll> ans;
        for(int i = 0; i < n-2; i++){
            int j = i+1;
            int k = n-1;
            int reqSum = tar - arr[i];
            while(j < k){
                if(arr[j] + arr[k] == reqSum){
                    flag = true;
                    break;
                }
                if(arr[j] + arr[k] > reqSum) k--;
                else if(arr[j] + arr[k] < reqSum) j++;
            }
            if(flag == true){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                ans.push_back(arr[k]);
                break;
            }
        }

        for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;

    }
}