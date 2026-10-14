#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        // set<string> uniqueStr;
        // queue<string> q;
        // q.push(s);
        // uniqueStr.insert(s);

        // while(!q.empty()){
        //     string temp = q.front();
        //     q.pop();

        //     if(temp.size() >= 1){
        //         string s1 = temp.substr(1);
        //         if(!s1.empty() && uniqueStr.find(s1) == uniqueStr.end()){
        //             uniqueStr.insert(s1);
        //             q.push(s1);
        //         }
        //     }

        //     if(temp.size() >= 2){
        //         string s2 = temp.substr(0,1) + temp.substr(2);
        //         if(!s2.empty() && uniqueStr.find(s2) == uniqueStr.end()){
        //             uniqueStr.insert(s2);
        //             q.push(s2);
        //         }
        //     }
        // }

        // cout << uniqueStr.size() << endl;


        set<char> unCh;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            unCh.insert(s[i]);
            ans += unCh.size();
        }
        cout << ans << endl;
    }
}