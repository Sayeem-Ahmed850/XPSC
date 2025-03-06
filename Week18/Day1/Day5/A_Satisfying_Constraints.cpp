// problem link : https://codeforces.com/problemset/problem/1920/A
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<pi> a(n);
    for(auto &val : a) cin >> val.first >> val.second;

    int mx = INT_MAX, mn = 0;
    for(auto val : a) 
    {
        if(val.first == 1) mn = max(mn, val.second);
        if(val.first == 2) mx = min(mx, val.second);
    }

    if(mn > mx) {cout << 0 << nl; return;}

    int ans = mx-mn+1;
    for(auto val : a)
    {
        if(val.first == 3)
        {
            if(val.second >= mn && val.second <= mx) ans--;
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