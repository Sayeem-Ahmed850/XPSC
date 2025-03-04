// problem link : https://codeforces.com/problemset/problem/2014/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n; ll sum = 0;
    vector<int> a(n);
    for(auto &val : a) cin >> val, sum += val;

    sort(a.begin(), a.end());

    if(n == 1 || n == 2) {cout << -1 << nl; return;}

    ll x = (1LL*a[n/2]*2*n-sum+1);
    cout << max(1LL*0, x) << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}