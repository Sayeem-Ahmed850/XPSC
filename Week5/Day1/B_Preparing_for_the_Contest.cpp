#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    
    int x = n - k;

    vector<int> a;

    for(int i = x; i <= n; i++) a.push_back(i);
    for(int i = x - 1; i >= 1; i--) a.push_back(i);

    for(auto val : a) cout << val << " ";
    cout << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}