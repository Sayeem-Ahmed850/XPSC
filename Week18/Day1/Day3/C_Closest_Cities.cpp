// problem link : https://codeforces.com/problemset/problem/1922/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &val : a) cin >> val;

    vector<ll> p(n), s(n);
    p[0] = 0, p[1] = 1;
    for(int i = 1; i < n-1; i++)
    {
        ll x = abs(a[i]-a[i-1]), y = abs(a[i]-a[i+1]);
        if(x < y)
        {
            ll diff = abs(a[i]-a[i+1]);
            p[i+1] = p[i]+diff;
        }
        else p[i+1] = p[i]+1;
    }

    s[n-1] = 0, s[n-2] = 1;
    for(int i = n-2; i >= 1; i--)
    {
        ll x = abs(a[i]-a[i+1]), y = abs(a[i]-a[i-1]);
        if(x < y)
        {
            ll diff = abs(a[i]-a[i-1]);
            s[i-1] = s[i]+diff;
        }
        else s[i-1] = s[i]+1;
    }

    int m; cin >> m;
    while(m--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;

        if(l < r) cout << p[r]-p[l] << nl;
        else cout << s[r]-s[l] << nl;
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}