#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    int a = (1 + y) / 2;
    int b = ((4 * y) + (x + 14)) / 15;
    cout << max(a, b) << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}