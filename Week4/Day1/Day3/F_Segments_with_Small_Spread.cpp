#include <bits/stdc++.h>
#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    multiset<ll> ml;
    int l = 0, r = 0, ans = 0;
    while (r < n)
    {
        ml.insert(a[r]);
        ll mn = *ml.begin(), mx = *ml.rbegin();

        if (mx - mn <= k) ans += (r - l) + 1;
        else
        {
            while (l <= r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= k) break;
                ml.erase(ml.find(a[l]));
                l++;
            }
            if (mx - mn <= k) ans += (r - l) + 1;  
        }
        r++;
    }

    cout << ans;
    return 0;
}