#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s; cin >> s;

    int l = 0, r = 0, cnt = 0, ans = 0;
    while (r < s.size())
    {
        if (s[r] == 'B') cnt++;

        if (r - l + 1 == k)
        {
            ans = max(ans, cnt);

            if(s[l] == 'B') cnt--;
            l++;
        }
        r++;
    }

    cout << k - ans << '\n';
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