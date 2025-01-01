// problem link : https://codeforces.com/problemset/problem/1676/E
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), pre(n);   
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());

    pre[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        pre[i] = pre[i-1]+a[i];
    }

    while(q--)
    {
        int k, ans = -1;
        cin >> k;
        auto it = lower_bound(pre.begin(), pre.end(), k);
        if(it != pre.end())
        {
            ans = (it - pre.begin())+1;
        }
        cout << ans << nl;
    }
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}