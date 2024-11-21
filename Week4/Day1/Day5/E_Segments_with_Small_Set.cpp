#include <bits/stdc++.h>
#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    map<int, int> mp;

    ll ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        mp[a[r]]++;

        if (mp.size() <= k) ans += r - l + 1;
        else
        {
            while (mp.size() > k && l <= r)
            {
                mp[a[l]]--;
                if (mp[a[l]] == 0) mp.erase(a[l]);
                l++;
            }
            if (mp.size() <= k) ans += r - l + 1;
        }
        r++;
    }
    cout << ans;
    return 0;
}