#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        if (s.size() != 5)
        {
            cout << "NO" << '\n';
        }
        else
        {
            map<char, char> mp;
            string x = "Timur";
            for (char c : x)
            {
                mp[c] = c;
            }

            bool flag = true;
            for (char c : s)
            {
                if (mp[c] == '\0' && c != mp[c])
                {
                    flag = false;
                    break;
                }
                else
                    mp.erase(c);
            }
            if (flag)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}