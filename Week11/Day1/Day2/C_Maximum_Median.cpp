// problem link : https://codeforces.com/problemset/problem/1201/C
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
    sort(a.begin(), a.end());


    auto ok = [&](int mid)
    {
        ll cnt = 0;
        for(int i = n/2; i < n; i++)
        {
            if(a[i] < mid) cnt += mid-a[i];
        }
        return cnt <= k;
    };

    int l = 1, r = 2e9, ans = -1;
    while(l <= r)
    {
        int mid = l+(r-l)/2;
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