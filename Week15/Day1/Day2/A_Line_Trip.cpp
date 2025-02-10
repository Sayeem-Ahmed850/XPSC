// problem link : https://codeforces.com/problemset/problem/1901/A
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n+2);
    for(int i = 1; i <= n; i++) cin >> a[i];
    a[n+1] = x;

    int ans = 0;
    for(int i = 0; i <= n; i++) 
    {
        ans = max(ans, abs(a[i]-a[i+1]));
    }
    int tmp = abs(a[n+1]-a[n])*2;
    ans = max(ans, tmp);
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}