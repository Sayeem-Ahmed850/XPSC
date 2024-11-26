#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int z = 0, nz = 0;
    for (auto val : a)
    {
        if (val == 0) z++;
        else nz++;
    }

    if (z == 0){
        cout << 0 << nl;
        return;
    }
    // if (nz >= z - 1){
    //     cout << 0 << nl;
    //     return;
    // }

    if(z - 1 <= nz){
        cout << 0 << nl;
        return;
    }

    int ans;
    int mx = *max_element(a.begin(), a.end());
    if (mx == 1){
        ans = 2;
    }
    else{
        ans = 1;
    }
    cout << ans << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}