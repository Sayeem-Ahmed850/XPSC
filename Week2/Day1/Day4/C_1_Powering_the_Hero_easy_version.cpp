#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    priority_queue<int> pq;
    int ans = 0;
    for (int val : a)
    {
        if (val == 0)
        {
            if(!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
        else
        {
            pq.push(val);
        }
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