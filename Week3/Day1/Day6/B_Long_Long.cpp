#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = 0, cnt = 0;
    while (r < n)
    {
        if (a[l] >= 0)
            l++, r++;
        else
        {
            while (r < n && a[r] < 1)
            {
                a[r] = a[r] * -1;
                r++;
            }
            l = r;
            cnt++;
        }
    }

    ll sum = 0;
    for (int val : a) sum += val;

    cout << sum << " " << cnt << '\n';
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