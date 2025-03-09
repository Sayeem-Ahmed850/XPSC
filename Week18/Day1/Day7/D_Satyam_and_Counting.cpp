// problem link : https://codeforces.com/problemset/problem/2009/D
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;    
    vector<vector<int>> a(n+5, vector<int>(2,0));
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
    }

    ll ans = 0;
    for(int i = 0; i <= n; i++)
    {
        if(a[i][0] && a[i][1]) ans += (n-2);
        if(a[i][0] && a[i+2][0] && a[i+1][1]) ans++;
        if(a[i][1] && a[i+2][1] && a[i+1][0]) ans++;
    }
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}