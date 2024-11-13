#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, m, h;
    cin >> n >> m >> h;

    vector<ll> a(n);
    vector<ll> b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        b[i] = b[i] * h;
    }
    sort(a.begin(), a.end(), greater<ll>());
    sort(b.begin(), b.end(), greater<ll>());

    ll l = 0, r = 0, ans = 0;
    while (l < n && r < m)
    {
        if (a[l] > b[r])
        {
            ans += b[r];
        }
        else
        {
            ans += a[l];
        }
        l++, r++;
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}