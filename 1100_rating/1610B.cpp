#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool f(vector<ll> &arr, ll mismatch){
    ll i = 0;
    ll j = arr.size()-1;

    while(i < j){
        if(arr[i] == mismatch) i++;
        else if(arr[j] == mismatch) j--;
        else if(arr[i] != arr[j]) return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}
void solve(ll n, vector<ll> &arr)
{
    // solution
    ll i = 0;
    ll j = n - 1;
    ll mismatchLeft = -1;
    ll mismatchRight = -1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            mismatchLeft = arr[i];
            mismatchRight = arr[j];
            break;
        }
        i++;
        j--;
    }

    if (mismatchLeft == -1)
    {
        cout << "YES\n";
        return;
    }

    if (f(arr, mismatchLeft) || f(arr, mismatchRight))
    {
        cout << "YES\n";
        return;
    }
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        solve(n, arr);
    }
}