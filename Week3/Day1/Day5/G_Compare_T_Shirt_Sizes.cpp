#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    char x = *a.rbegin(), y = *b.rbegin();
    if (x != y)
    {
        if (x == 'L') cout << ">" << nl;
        else if (y == 'L') cout << "<" << nl;        
        else if (x == 'M') cout << ">" << nl;   
        else if (y == 'M') cout << "<" << nl;
    }
    else
    {
        int a_cnt = count(a.begin(), a.end(), 'X');
        int b_cnt = count(b.begin(), b.end(), 'X');

        if (x == 'S' || x == 'M')
        {
            if (a_cnt > b_cnt) 
                cout << "<" << nl;
            else if (a_cnt < b_cnt) 
                cout << ">" << nl;
            else 
                cout << "=" << nl;
        }
        else
        {
            if (a_cnt > b_cnt)
                cout << ">" << nl;
            else if (a_cnt < b_cnt)
                cout << "<" << nl;
            else
                cout << "=" << nl;
        }
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