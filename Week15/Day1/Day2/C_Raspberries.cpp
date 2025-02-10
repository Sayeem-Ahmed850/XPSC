// problem link : https://codeforces.com/problemset/problem/1883/C
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k, even = 0, ans = INT_MAX;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &val : a)
    {
        cin >> val;
        if(val % k == 0) ans = min(ans, 0);
        if(val % 2 == 0) even++;
    }

    if(k == 2)
    {
        if(even >= 1) ans = 0;
        else ans = min(ans, 1);
    }
    else if(k == 5 || k == 3)
    {
        for(int i = 0; i < n; i++)
        {
            int x = a[i], cnt = 0;
            while(x % k != 0) x++, cnt++;
            ans = min(ans, cnt);
        }
    }
    else
    {
        if(even >= 2) ans = 0;
        else if(even == 1) ans = min(ans, 1);
        else
        {
            for(int i = 0; i < n; i++)
            {
                int x = a[i], cnt = 0;
                while(x % k != 0) x++, cnt++;
                ans = min(ans, cnt);
            }
            ans = min(ans, 2);
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