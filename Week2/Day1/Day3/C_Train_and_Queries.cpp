#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    map<int, set<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x].insert(i);
    }
    while (k--)
    {
        int a, b;
        cin >> a >> b;

        if (mp.find(a) == mp.end() || mp.find(b) == mp.end())
        {
            cout << "NO" << '\n';
        }
        else
        {
            int l = *mp[a].begin();
            int r = *mp[b].rbegin();
            if (l < r)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }
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