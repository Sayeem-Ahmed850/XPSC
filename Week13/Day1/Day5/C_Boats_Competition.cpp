// problem link : https://codeforces.com/problemset/problem/1399/C
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &val : a) cin >> val;

    if(n == 1)
    {
        cout << 0 << nl; return;
    }

    sort(a.begin(), a.end());

    int mn = a[0]+a[1], mx = a[n-2]+a[n-1], ans = 0;
    for(int i = mn; i <= mx; i++)
    {
        int l = 0, r = n-1, cnt = 0;
        while(l < r)
        {
            int s = a[l]+a[r];
            if(s == i) cnt++, l++, r--;
            else if(s > i) r--;
            else if(s < i) l++; 
        }
        ans = max(ans, cnt);
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