// problem link : https://codeforces.com/problemset/problem/1872/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


void solve()
{
    ll l, r;
    cin >> l >> r;

    for(ll i = l; i <= r; i++)
    {
        for(ll j = 2; j*j <= i; j++)
        {
            if(i % j == 0)
            {
                cout << j << " " << i-j << nl;
                return;
            }
        }
    }
    cout << -1 << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}
