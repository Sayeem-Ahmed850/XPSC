#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) a[i] += i + 1;
    sort(a.begin(), a.end());

    int cnt = 0;
    for(auto val : a) 
    {
        c -= val;
        if(c < 0) break;
        cnt++;
    }
    cout << cnt << '\n';
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}