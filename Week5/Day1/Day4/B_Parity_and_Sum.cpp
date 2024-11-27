#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int e = 0, o = 0;
    ll mx_even = 0, mx_odd = 0;
    for (auto val : a)
    {
        if (val % 2 == 0){
            e++;
            mx_even = max(mx_even, 1LL * val);
        }
        else{
            o++;
            mx_odd = max(mx_odd, 1LL * val);
        }
    }
    if (e == n || o == n){
        cout << 0 << nl;
        return;
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0){
            if (a[i] < mx_odd) mx_odd += a[i];
        }
    }
    if (mx_odd < mx_even)
        cout << e + 1 << nl;
    else
        cout << e << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}