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

    ll sum = 0;
    int mx = 0, cnt =  0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        mx = max(mx, a[i]);
        if(sum - mx == mx) cnt++;
    }
    cout << cnt << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}