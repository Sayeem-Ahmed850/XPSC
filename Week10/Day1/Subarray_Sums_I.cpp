#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = 0, ans = 0;
    ll sum  = 0;
    while(r < n)
    {
        sum += a[r];
        if(sum >= k)
        {
            while(l < r && sum > k)
            {
                sum -= a[l];
                l++;
            }
            if(sum == k) ans++;
        }
        r++;
    }
    cout << ans << nl;
    return 0;
}