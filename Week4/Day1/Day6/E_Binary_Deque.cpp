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

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];


    int l = 0, r = 0, sum = 0, ans = 0;
    while(r < n)
    {
        sum += a[r];
        if(sum == s)
        {
            ans = max(ans, r - l + 1);
        }
        if(sum > s)
        {
            while(sum > s && l <= r)
            {
                sum -= a[l];
                l++;
            }
        }
        r++;
    }
    if(sum != s) cout << -1 << nl;
    else cout << n - ans << nl;

}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;   
}
