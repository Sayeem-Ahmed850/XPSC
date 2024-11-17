#include <bits/stdc++.h>
using namespace std;

void solve()
{
    map<int, vector<int>> val;
    map<int, int> cnt;

    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        vector<int> v(n - 1);
        for (int j = 0; j < n - 1; j++) cin >> v[j];
        
        val[v[0]] = v;
        cnt[v[0]]++;
    }

    int mx_val, mn_val, mx_cnt = 0, mn_cnt = INT_MAX;
    for (auto [x, y] : cnt)
    {
        if (y < mn_cnt)
        {
            mn_cnt = y;
            mn_val = x;
        }
        if (y > mx_cnt)
        {
            mx_cnt = y;
            mx_val = x;
        }
    }

    cout << mx_val << " ";
    for (auto val : val[mn_val]) cout << val << " ";
    cout << '\n';
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