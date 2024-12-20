// problem link : https://codeforces.com/problemset/problem/1891/B
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        if(b.empty() || b.back() > x)
        {
            b.push_back(x);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(auto val : b)
        {
            if(a[i] % (1 << val) == 0)
            {
                a[i] += (1 << (val-1));
            }
        }
    }
    for(auto val : a) cout << val << " ";
    cout << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}