#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    map<ll, ll> mxBit;
    for(int i = 0; i < n; i++) 
    {
        mxBit[__lg(a[i])]++;
    }   

    ll ans = 0;
    for(auto[x, y] : mxBit)
    {
        ll b = y-1;
        if(y > 1) ans += 1LL * (b * (b + 1)) / 2;

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