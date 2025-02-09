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
    int n, k;
    cin >> n >> k;
    int even = 0;
    vector<int> a(n);
    for(auto &val : a) 
    {
        cin >> val;
        if(val % 2 == 0) even++;
    }   

    int ans = INT_MAX;
    if(k == 2)
    {
        if(even >= 1) ans = min(ans, 1);
        else ans = min(ans, 2);
    }
    else if(k == 4)
    {
        ans = max(0, 2-even);
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            int x = a[i], cnt = 0;
            while(x % k != 0) cnt++, x++;
            ans = min(ans, cnt);
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