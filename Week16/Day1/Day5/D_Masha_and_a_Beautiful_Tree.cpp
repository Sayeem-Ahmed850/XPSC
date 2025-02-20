// problem link : https://codeforces.com/problemset/problem/1741/D
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &val : a) cin >> val;
    
    int ans = 0;
    for(int i = 1; i < sqrt(n)+1; i++)
    {
        for(int j = 0; j <= n-pow(2,i); j+=pow(2,i))
        {
            int r = j+pow(2,i);
            if(!is_sorted(a.begin()+j, a.begin()+r))
            {
                sort(a.begin()+j, a.begin()+r);
                ans++;
            }
            for(int k = j; k < r-1; k++)
            {
                if(a[k]+1 != a[k+1]) {cout << -1 << nl; return;}
            }
        }
    }
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}