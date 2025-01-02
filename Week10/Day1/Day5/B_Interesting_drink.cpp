// problem link : https://codeforces.com/contest/706/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int q; cin >> q;
    while(q--)
    {
        int m; cin >> m;
    
        int l = 0, r = n-1, ans = 0;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(a[mid] <= m)
            {
                ans = mid+1;
                l = mid+1;
            }
            else r = mid-1;
        }
        cout << ans << nl;
    }
    return 0;
}