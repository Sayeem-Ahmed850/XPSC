#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;
    s += s;

    int mx = 0, cnt = 0;
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            flag = true;
        }
        if (s[i] == 'g')
        {
            flag = false;
            if (cnt > mx)
            {
                mx = cnt;
                cnt = 0;
            }
            else cnt = 0;
        }
        if (flag) cnt++;  
    }
    cout << mx << '\n';
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