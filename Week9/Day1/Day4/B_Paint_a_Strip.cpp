// problem link : https://codeforces.com/problemset/problem/2040/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    int i = 1, ans = 1;
    while(i <= (n+n)+2)
    {
        if(n <= i)
        {
            cout << ans << nl;
            return;
        }
        ans++;
        i = (i+i)+2;
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}