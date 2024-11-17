#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int a, b, n, s;
    cin >> a >> b >> n >> s;

    ll sum = (1LL * n * a);
    if (sum > s)
    {
        int dvd = s / n;
        ll need = s - (1LL * n * dvd);
        if (b >= need)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    else
    {
        ll need = s - sum;
        if (b >= need)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}