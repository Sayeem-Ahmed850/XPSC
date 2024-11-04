#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        string s; cin >> s;
        for (char c : s)
        {
            if (c == 'U')
            {
                if (a[i] == 0)
                    a[i] = 9;
                else
                    a[i]--;
            }
            else if (c == 'D')
            {
                if (a[i] == 9)
                    a[i] = 0;
                else
                    a[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
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