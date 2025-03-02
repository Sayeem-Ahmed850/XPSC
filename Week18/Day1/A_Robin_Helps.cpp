// problem link : https://codeforces.com/problemset/problem/2014/A
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &val : a) cin >> val;

    int gold = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= k) gold += a[i];
        if(a[i] == 0) 
        {
            if(gold > 0) gold--, ans++;
        }
    }
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}