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

    auto ok = [&](int mid)
    {
        int cnt = 1, stall = a[0];
        for(int i = 0; i < n; i++)
        {
            if(a[i]-stall >= mid)
            {
                cnt++;
                stall = a[i];
                if(cnt == k) return true;
            }
        }
        return false;
    };

    int l = 1, r = a[n-1]-a[0], mid, ans;
    while(l <= r)
    {
        mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout << ans << nl;
    return 0;
}