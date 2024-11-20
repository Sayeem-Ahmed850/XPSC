#include <bits/stdc++.h>
#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    ll n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll sum = 0;
    int l = 0, r = 0, ans = INT_MAX;
    while (r <= n)
    {
        if (sum < s)
        {
            sum += a[r];
            r++;
        }
        else
        {
            ans = min(ans, r - l);
            sum -= a[l];
            l++;
        }
    }
    if(ans == INT_MAX) cout << -1;
    else cout << ans;
    return 0;
}