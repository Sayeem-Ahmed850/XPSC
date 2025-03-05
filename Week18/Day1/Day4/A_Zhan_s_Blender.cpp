// problem link : https://codeforces.com/problemset/problem/2013/A
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    int ans;
    if(x < y) ans = ceil(1.0*n/x);
    else ans = ceil(1.0*n/y);
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}