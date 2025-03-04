// problem link : https://codeforces.com/problemset/problem/1872/D
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    ll a = n/x, b = n/y;
    ll lcm = (x/gcd(x, y))*y;
    ll sub = n/lcm;
    a -= sub, b -= sub;

    ll l = n-a+1, r = n;
    ll sum1 = (r-l+1)*(l+r)/2;

    l = 1, r = b;
    ll sum2 = (r-l+1)*(l+r)/2;

    cout << sum1-sum2 << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}