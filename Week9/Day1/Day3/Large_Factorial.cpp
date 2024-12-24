// problem link : https://www.codechef.com/problems/FUM
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int MOD = 1e9+7;

void solve()
{
    int n; cin >> n;
    ll ans = 1;
    for(int i = 1; i <= n; i++)
    {
        ans = (ans % MOD * i % MOD) % MOD;
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