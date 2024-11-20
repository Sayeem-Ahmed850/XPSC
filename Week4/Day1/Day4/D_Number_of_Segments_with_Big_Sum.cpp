#include <bits/stdc++.h>
#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    ll n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll sum = 0, ans = 0;
    int l = 0, r = 0;

    while (r <= n)
    {
        if (sum < k)
        {
            sum += a[r];
            r++;
        }
        else
        {
            ans += (n - r) + 1;
            sum -= a[l];
            l++;
        }
    }
    cout << ans;
    return 0;
}