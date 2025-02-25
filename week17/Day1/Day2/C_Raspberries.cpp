// problem link : https://codeforces.com/problemset/problem/1883/C
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

    if(k == 2)
    {
        for(auto val : a) if(val % 2 == 0) {cout << 0 << nl; return;}
    }
    else if(k == 4)
    {
        int even = 0;
        for(auto val : a) 
        {
            if(val % k == 0) {cout << 0 << nl; return;}
            if(val % 2 == 0) even++;
        }
        if(even >= 2) {cout << 0 << nl; return;}
        else if (even == 1) {cout << 1 << nl; return;}
    }

    int ans = INT_MAX;
    for(auto val : a)
    {
        int op = 0, x = val;
        while(x%k != 0) x++, op++;
        ans = min(ans, op);
    }
    if(k == 4) cout << min(2, ans) << nl;
    else cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}