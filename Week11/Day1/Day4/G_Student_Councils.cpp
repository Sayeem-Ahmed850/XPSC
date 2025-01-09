// problem link : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/G
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    auto ok = [&](ll mid)
    {
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > mid) sum += mid;
            else sum += a[i];
        }   
        return (sum/mid) >= k;
    };

    // 2.5e10
    ll l = 1, r = 2.5e10, mid, ans;
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