#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> tmp(n);
    for (int i = 0; i < n; i++) cin >> tmp[i];

    ll l = 0, r = 0, cnt = 0, ans = 0;
    while (r < n)
    {
        if (tmp[l] > q) l++, r++;
        else
        {
            while (r < n && tmp[r] <= q)
            {
                r++;
                cnt++;
            }
            l = r;
            if (cnt >= k)
            {
                ll x = (cnt - k) + 1;
                ll y = x * (x + 1) / 2;
                ans += y;
            }
        }
        cnt = 0;
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