#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;

    string s = to_string(n);
    int len = s.size();

    ll tsum = 0;
    for (char x : s) tsum += (x - '0');

    // If already beautiful
    if (tsum <= 9) {
        cout << 0 << "\n";
        return;
    }

    // Collect the max possible reduction each digit can offer
    vector<int> reductions;
    
    // First digit can be reduced to '1', so it saves (value - 1)
    reductions.push_back((s[0] - '0') - 1);
    
    // Other digits can be reduced to '0', so they save their entire value
    for (int i = 1; i < len; i++) {
        reductions.push_back(s[i] - '0');
    }

    // Sort reductions in descending order
    sort(reductions.rbegin(), reductions.rend());

    int moves = 0;
    for (int reduction : reductions) {
        tsum -= reduction;
        moves++;
        if (tsum <= 9) {
            break;
        }
    }

    cout << moves << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
