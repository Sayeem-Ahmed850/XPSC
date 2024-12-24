// problem link : https://cses.fi/problemset/task/1095
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int MOD = 1e9+7;

void solve()
{
    int x, n;
    cin >> x >> n;

    int ans = 1;
    while(n)
    {
        if(n & 1)
        {
            ans = (1LL * ans % MOD * x % MOD) % MOD;
        }
        x = (1LL * x * x % MOD);
        n >>= 1;
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