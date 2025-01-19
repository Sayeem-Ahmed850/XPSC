// problem link : https://codeforces.com/problemset/problem/1955/D
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    map<int, int> mp1, mp2;

    for(auto &val : a) cin >> val;
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        mp1[x]++;
    }

    int l = 0, r = 0, cnt = 0, ans = 0;
    while(r < n)
    {
        mp2[a[r]]++;
        if(mp2[a[r]] <= mp1[a[r]]) cnt++;

        if(r-l+1 == m)
        {
            if(cnt >= k) ans++;
            if(mp2[a[l]] <= mp1[a[l]]) cnt--;
            mp2[a[l]]--;
            l++;
        }
        r++;
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

