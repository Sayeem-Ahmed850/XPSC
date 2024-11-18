#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int time1 = a - 1;
    
    if(b > c)
    {
        int time2 = (b - c) + (c - 1);
        if(time1 == time2)
            cout << 3 << '\n';
        else if(time1 > time2)
            cout << 2 << '\n';
        else
            cout << 1 << '\n';
    }
    else
    {
        int time2 = abs(b - c) + abs(c - 1);
        if(time1 == time2)
            cout << 3 << '\n';
        else if(time1 > time2)
            cout << 2 << '\n';
        else
            cout << 1 << '\n';
    }
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