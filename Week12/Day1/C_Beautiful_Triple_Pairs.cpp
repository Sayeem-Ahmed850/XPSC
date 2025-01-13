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
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll ans = 0;
    map<tuple<int, int, int>, int> mp;
    for(int i = 0; i < n-2; i++)
    {
        ans += mp[{0, a[i+1], a[i+2]}]++;
        ans += mp[{a[i], 0, a[i+2]}]++;
        ans += mp[{a[i], a[i+1], 0}]++;
        ans -= 3*mp[{a[i], a[i+1], a[i+2]}]++;
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