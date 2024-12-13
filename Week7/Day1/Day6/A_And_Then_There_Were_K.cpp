#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;

    int ans = 0;
    for(int i = 1; i < 32; i++)
    {
        if(n >= ans && n <= (ans * 2) + 1)
        {
            cout << ans << nl;
            break;
        }
        ans = (ans * 2) + 1;
    }
}

int main()
{
    FIO;
    
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}