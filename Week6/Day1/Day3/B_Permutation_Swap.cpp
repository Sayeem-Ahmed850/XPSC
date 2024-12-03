#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    for(int i = 0; i < n; i++)
    { 
        ans = __gcd(ans, abs(a[i] - (i + 1)));
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