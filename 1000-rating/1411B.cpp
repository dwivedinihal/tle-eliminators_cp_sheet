#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool isFair(ll n){
    ll temp = n;

    while(temp > 0){
        int digit = temp % 10;
        if(digit != 0 && n % digit != 0) return false;
        temp = temp / 10;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    
    while(t--){
        ll n;
        cin >> n;

        while(!isFair(n)){
            n++;
        }

        cout << n << endl;
    }
}