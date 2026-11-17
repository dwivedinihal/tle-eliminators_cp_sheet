#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // solution
    sort(arr.begin(), arr.end());

    int cnt_max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[n - 1]) cnt_max++;
    }

    if (k < cnt_max) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    for (int i = n - k; i < n; i++) {
        cout << arr[i] << " ";
    }

    for (int i = n - k - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
