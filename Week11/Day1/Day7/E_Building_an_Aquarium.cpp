// problem link : https://codeforces.com/problemset/problem/1873/E
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i]; 
    sort(a.begin(), a.end());

    auto ok = [&](ll h)
    {
        ll units = 0;   
        for(int i = 0; i < n; i++)
        {   
            if(h > a[i]) units += h-a[i];
        }
        if(units <= x) return true;
        return false;
    };

    ll l = 1, r = 2e9, mid, ans;
    while(l <= r)
    {
        mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans = mid;
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