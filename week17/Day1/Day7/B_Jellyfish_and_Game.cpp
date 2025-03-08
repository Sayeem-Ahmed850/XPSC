// problem link : https://codeforces.com/problemset/problem/1875/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(auto &val : a) cin >> val;
    for(auto &val : b) cin >> val;

    int x = 0, y = 0;
    for(int i = 0; i < n; i++) if(a[i] < a[x]) x = i;
    for(int i = 0; i < m; i++) if(b[i] > b[y]) y = i;
    if(a[x] < b[y]) swap(a[x], b[y]);

    if(k % 2 == 0)
    {
        x = 0, y = 0;
        for(int i = 0; i < n; i++) if(a[i] > a[x]) x = i;
        for(int i = 0; i < m; i++) if(b[i] < b[y]) y = i;
        swap(a[x], b[y]);
    }

    ll ans = 0;
    for(auto val : a) ans += val;
    cout << ans << nl;
}

int main()
{
    FIO;        
    int t; cin >> t;
    while(t--) solve();
    return 0;
}