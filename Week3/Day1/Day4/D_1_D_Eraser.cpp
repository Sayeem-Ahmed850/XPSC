#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s; cin >> s;

    int l = 0, r = 0, cnt = 0;
    while(r < n)
    {
        if(s[l] == 'W') l++, r++;
        else
        {   
            while (r < n && r - l + 1 != k)
            {
                r++;
            }
            r++; l = r;
            cnt++;
        }
    }

    cout << cnt << '\n';

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