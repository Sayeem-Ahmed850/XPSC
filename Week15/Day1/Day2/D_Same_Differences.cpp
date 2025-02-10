// problem link : https://codeforces.com/problemset/problem/1520/D
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &val : a) cin >> val;
    
    map<int, int> mp;
    for(int i = 0; i < n; i++) mp[a[i]-(i+1)]++;     
    ll ans = 0;
    for(auto[x, y]:mp)
    {
        ll tmp = 1LL * y * (y-1)/2;
        ans += tmp;
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