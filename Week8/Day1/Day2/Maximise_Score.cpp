// problem link : https://www.codechef.com/problems/MAXIMSCORE?tab=statement
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

    int ans = INT_MAX;
    if(n > 1)
    {
        ans = min(ans, abs(a[0] - a[1]));
        ans = min(ans, abs(a[n-1] - a[n-2]));
    }

    for(int i = 1; i < n-1; i++)
    {
        int y = max(abs(a[i] - a[i-1]), abs(a[i] - a[i+1]));
        ans = min(ans, y);
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