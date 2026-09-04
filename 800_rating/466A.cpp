#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,m,a,b;
     cin >> n >> m >> a >> b;

     // if we pick all n ride by simple one by one 
     int c1 = n * a;

     // if pick combintation of 1 ride and m rides;
     int req_groups = n / m;
     int rem_rides = n % m;
     int total_groups = req_groups + rem_rides;
     int c2 = req_groups * b + rem_rides * a;

     // if we pick all the ride using m rides group
     int grp = n/m + 1;
     int c3 = grp * b;

     cout << min({c1, c2, c3}) << endl;
}