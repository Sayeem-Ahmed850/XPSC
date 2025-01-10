// problem link : https://codeforces.com/problemset/problem/2009/E
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()    
{
    int n, k;
    cin >> n >> k;

    auto ok = [&](ll mid, ll &ans)
    {
        ll l = k, r = (n+k)-1, m = mid+1;
        ll a = abs((mid*(mid+1))/2 - ((l-1)*l)/2);
        ll b = abs((r*(r+1))/2 - ((m-1)*m)/2);

        ans = min(ans, abs(a-b));

        if(a < b) return true;
        else return false;
    };

    ll l = k, r = (n+k)-1, mid, ans = LLONG_MAX;
    while(l <= r)
    {
        mid = l+(r-l)/2;
        if(ok(mid, ans))
        {
            l = mid+1;
        }
        else r = mid-1;
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