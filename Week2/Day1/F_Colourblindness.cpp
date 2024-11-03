#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    string a, b; cin >> a >> b;

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] == 'G' && b[i] != 'B')
            {
                flag = false;
                break;
            }
            else if (a[i] == 'B' && b[i] != 'G')
            {
                flag = false;
                break;
            }
            else if (a[i] == 'R')
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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