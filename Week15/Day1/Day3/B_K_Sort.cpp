// problem link : https://codeforces.com/problemset/problem/1987/B
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

    int mx = 0;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= mx) mx = a[i];
        else v.push_back(mx-a[i]);
    }
    sort(v.begin(), v.end());

    ll curr = 0, ans = 0;
    for(int i = 0; i < v.size(); i++)
    {
        ll x = abs(curr - v[i]);
        ll y = (x * (v.size()-i))+x;
        curr = v[i]; ans += y;
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