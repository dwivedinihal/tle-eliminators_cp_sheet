#include<bits/stdc++.h>
using namespace std;

vector<int> prime(int n){
    vector<bool> prime(n+1, true);
    for(int i = 2; i * i <= n; i++){
        if(prime[i] == true){
            for(int x = i * i; x <= n; x+=i){
                prime[x] = false;
            }
        }
    }


    vector<int> res;
    for(int p = 2; p <= n; p++){
        if(prime[p]) res.push_back(p);
    }

    return res;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int d;
        cin >> d;

        // solution 
        // 1st factor toh humesha 1 he hoga
        // 2nd factor >= 1 + d hona chahiye iska mtlb second factor prime hona chahiye
        // kyuki agar prime nhi hoga toh 1 aur uske beech mae kch aur factore aajyenge jo D wala condition ko false krdenge
        // 3rd factor >= p + d; 
        // 4th factor = p * q;

        //  toh phele 2nd factor k liye hum 10000 tak k prine numbers ko store kra lenge
        vector<int> res = prime(50000);
        auto two = lower_bound(res.begin(), res.end(), 1+d);
        int p = *two;
        auto third = lower_bound(res.begin(), res.end(), p+d);
        int q = *third;
        long long a = (long long)p * q; // forth divisors
        cout << a << "\n";
    }
}