// problem link : https://codeforces.com/problemset/problem/1780/B
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
    int n; cin >>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // prefix sum
    vector<ll>pre1(n);
    pre1[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        pre1[i] = a[i] + pre1[i-1];
    }

    ll ans = 0;
    for(int i = 0; i < n-1; i++)
    {
        ll sub = pre1[n-1] - pre1[i];
        ans = max(ans, __gcd(pre1[i], sub));
    }
    cout << ans << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}