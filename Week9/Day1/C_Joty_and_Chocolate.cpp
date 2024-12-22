// problem link : https://codeforces.com/problemset/problem/678/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll x = p * (n / a), y = q * (n / b), z = n / ((a / __gcd(a, b)) * b);
    ll ans = (x + y) -(z * (p + q)) + (z * max(p, q));
    cout << ans;
    return 0;
}