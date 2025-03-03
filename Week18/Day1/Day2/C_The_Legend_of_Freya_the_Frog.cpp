// problem link : https://codeforces.com/problemset/problem/2009/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    int a = ceil(1.0 * x/k);
    int b = ceil(1.0 * y/k);

    if(a > b)
        cout << (2*a)-1 << nl;
    else if(b >= a)
        cout << (2*b) << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}