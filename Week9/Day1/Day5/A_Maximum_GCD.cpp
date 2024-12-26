// problem link : https://codeforces.com/problemset/problem/1370/A
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    if(n % 2 == 0)
    {
        cout << n/2 << nl;
    }
    else
    {
        --n;
        cout << n/2 << nl;
    }
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}