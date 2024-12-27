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
    map<int, int> mp;
    for(int i = 0; i < n; i++) 
    {
        int x; cin >> x;
        mp[x] = i+1;
    }
    int ans = -1;

    for(auto [x, y]: mp)
    {
        for(auto [l, r]: mp)
        {
            if(__gcd(x, l) == 1)
            {
                ans = max(ans, y+r);
            }
        }
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