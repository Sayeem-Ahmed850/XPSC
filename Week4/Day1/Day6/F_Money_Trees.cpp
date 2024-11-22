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
    int n, s; 
    cin >> n >> s;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    ll sum = 0;
    int l = 0, r = 0, ans = 0;

    while(r < n)
    {
        if(r == n - 1)
        {
            sum += a[r];
            if(sum <= s) ans = max(ans, r - l + 1);
            r++;
        }
        else
        {
            if(b[r] % b[r + 1] == 0)
            {
                sum += a[r];
                if(sum <= s) ans = max(ans, r - l + 1);
                else
                {
                    while(sum > s && l <= r)
                    {
                        sum -= a[l];
                        l++;
                    }
                }
                r++;
            }
            else
            {
                sum += a[r];
                if(sum <= s) ans = max(ans, r - l + 1);
                r++;
                l = r;
                sum = 0;
            }
        }
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