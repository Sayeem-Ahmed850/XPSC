#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;

    priority_queue<int> pq;
    for (int i = n; i >= 1; i--)
    {
        pq.push(i);
    }

    cout << 2 << '\n';
    while (pq.size() > 1)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();

        cout << x << " " << y << '\n';
        int z = x + y;

        if (z % 2 != 0) z++;
        z /= 2;
        pq.push(z);
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