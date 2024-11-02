#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    bool flag = false;

    for (int i = 0; i < s.size() - 1; i++)
    {
        cout << s[i];
        if (s[i] == s[i + 1] && flag == false)
        {
            flag = true;
            if (s[i] == 'z')
            {
                cout << 'a';
            }
            else
            {
                cout << char(s[i] + 1);
            }
        }
    }
    if(flag)
    {
        cout << s[s.size()-1];
    }
    if(!flag && s[s.size() - 1] == 'a')
    {
        cout << s[s.size() - 1] << char(s[s.size() - 1] + 1);
    }
    else if(!flag)
    {
        cout << s[s.size() - 1] << 'a';
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}