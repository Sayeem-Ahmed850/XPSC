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
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    int l = 0, r = 0, ans = 0;

    while(l < n && r < m)
    {
        if(a[l] == b[r])
        {
            l++, r++, ans++;
        }   
        else r++;
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