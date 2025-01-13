#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int MOD = 1e9+7; 

void solve()
{
    int h, n;
    cin >> h >> n;
    vector<int> a(n), c(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> c[i];

    auto ok = [&](ll mid)
    {
        ll ans = 0;
        for(int i = 0; i < n; i++)  
        {
            ll cnt = (mid+c[i]-1)/c[i];
            ans += ((cnt % MOD) * (a[i] % MOD)) % MOD;
        }
        return h-ans <= 0;
    };

    ll l = 1, r = 2e5*2e5, mid, ans;
    while(l <= r)
    {
        mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
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
