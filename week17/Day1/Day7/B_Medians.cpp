// problem link : https://codeforces.com/problemset/problem/2032/B
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    if(n == 1 && k == 1) {cout << 1 << nl << 1 << nl; return;}
    if(k == 1 || k == n) {cout << -1 << nl; return;}

    cout << 3 << nl;
    if((k+1)%2 == 0)
        cout << 1 << " " << k-1 << " " << k+2 << nl;
    else
        cout << 1 << " " << k << " " << k+1 << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}