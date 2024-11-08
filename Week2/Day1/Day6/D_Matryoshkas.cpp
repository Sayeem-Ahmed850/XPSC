#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n; cin >> n;
    map<ll, ll, greater<ll>> mp;

    for (int i = 0; i < n; i++)
    {
        ll x; cin >> x;
        mp[x]++;
    }

    ll a = mp.begin()->first, b = mp.begin()->second, cnt = mp.begin()->second;

    auto it = mp.begin(); it++;
    while (it != mp.end())
    {
        if ((a - it->first) > 1)
        {
            cnt += it->second;
        }
        else if (it->second > b)
        {
            ll sub = it->second - b;
            cnt += sub;
        }
        a = it->first, b = it->second;
        it++;
    }
    cout << cnt << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
    while (t--)
        solve();
    return 0;
}