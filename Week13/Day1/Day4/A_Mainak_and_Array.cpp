// problem link : https://codeforces.com/problemset/problem/1726/A
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
    vector<int> a(n);
    for(auto &val : a) cin >> val;

    int ans = 0;
    for(int i = 1; i < n; i++)
    {
        ans = max(ans, a[i-1]-a[i]);
        ans = max(ans, a[i]-a[0]);
        ans = max(ans, a[n-1]-a[i-1]);
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