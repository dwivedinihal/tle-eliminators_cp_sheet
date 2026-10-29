#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;

    vector<int> pos(51,0);
    for(int i = 1; i <= n; i++){
        int color;
        cin >> color;
        if(pos[color] == 0) pos[color] = i;
    }

    for(int i = 0; i < q; i++){
        int qq;
        cin >> qq;

        int curPos = pos[qq];
        cout << curPos << (i == q-1 ? "" : " ");

        // upate krde baaki kipos
        for(int c = 1; c <= 50 ; c++){
            if(pos[c] > 0 && pos[c] < curPos){
                pos[c]++;
            }
        }
        pos[qq] = 1;
    }
    cout << "\n";
}