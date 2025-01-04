// problem link : https://codeforces.com/contest/474/problem/B?locale=en
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int m; cin >> m;
    vector<int> q(m);
    for(int i = 0; i < m; i++) cin >> q[i];

    vector<int> p(n);
    p[0] = 1;
    for(int i = 1; i < n; i++) p[i] = p[i-1]+a[i-1];
 
    for(int i = 0; i < m; i++)
    {
        int l = 0, r = n-1, ans = -1;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(p[mid] <= q[i])
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