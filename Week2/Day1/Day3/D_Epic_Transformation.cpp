#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    priority_queue<int> pq;
    for (auto [x, y] : mp)
    {
        pq.push(y);
    }

    while (!pq.empty())
    {
        if (pq.size() < 2)
        {
            break;
        }

        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();

        a--, b--;
        if (a > 0)
        {
            pq.push(a);
        }
        if (b > 0)
        {
            pq.push(b);
        }
    }
    int siz = 0;
    while (!pq.empty())
    {
        siz += pq.top();
        pq.pop();
    }
    cout << siz << '\n';
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