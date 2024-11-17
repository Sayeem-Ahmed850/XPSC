#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int l = 0, r = 0, cnt1 = 0;
    while (r < n)
    {
        if (s[l] == '0') l++, r++;
        else
        {
            while (r < n && s[r] == '1') r++;
            l = r; 
            cnt1++;
        }
    }

    l = 0, r = 0;
    int cnt2 = 0;
    while (r < n)
    {
        if (s[l] == '1') l++, r++;
        else
        {
            while (r < n && s[r] == '0') r++;
            l = r; 
            cnt2++;
        }
    }
    cout << min(cnt1, cnt2) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}