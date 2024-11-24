#include <bits/stdc++.h>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    if (n % 2 != 0) no;
    else
    {
        yes;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (x < 2)
            {
                cout << "A"; x++;
            }
            else
            {
                cout << "B"; x++;
                if (x == 4) x = 0;
            }
        }
        cout << nl;
    }
}

int main()
{
    FIO;

    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}