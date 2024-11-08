#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    while(q--)
    {
        int d; cin >> d;
        if(d < *v.begin())
        {
            cout << *v.begin() - 1 << '\n';
        }
        else if(d > *--v.end())
        {
            cout << n - *--v.end() << '\n';
        }
        else
        {


            int l = *lower_bound(v.begin(), v.end(), d), r = *--lower_bound(v.begin(), v.end(), d);
            int mid = (l + r) / 2;

            int ans = min(abs(mid - l), abs(mid - r));
            cout << ans << '\n';

        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}