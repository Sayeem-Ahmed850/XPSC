// problem link : https://codeforces.com/problemset/problem/2013/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    ll sum = 0;
    vector<int> a(n);
    for(auto &val : a) cin >> val, sum += val;
    cout << sum-(a[n-2]*2) << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}