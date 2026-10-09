#include<bits/stdc++.h>
using namespace std;
int computeXOR(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0; // if n % 4 == 3
}
int main(){
    int t;
    cin >> t;

    while(t--){
        int a,b;
        cin >> a >> b;

        // solution
        // MEX ko achieve krne k liye 1 array bna lo jisame 0 se leke a-1 element rkh lo
        // toh MEX next elemet a he hoga 
        int temp = computeXOR(a - 1); 
        int p = temp ^ b;
        if(temp == b) cout << a << endl;
        else if(p == a) cout << a+2 << endl;
        else cout << a+1 << endl;

    }
}