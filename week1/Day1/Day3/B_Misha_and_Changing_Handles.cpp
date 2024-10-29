#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin >> n;
    map<string, string> mp1;
    map<string, string> mp2;
    for (int i = 1; i <= n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (mp2.find(s1) != mp2.end())
        {
            string s = mp2[s1];
            mp1[s] = s2;
            mp2.erase(s1);
            mp2[s2] = s;
        }
        else
        {
            mp1[s1] = s2;
            mp2[s2] = s1;
        }
    }
    cout << mp1.size() << '\n';
    for(auto [key, val] : mp1)
    {
        cout << key << " " << val << '\n';
    }

    return 0;
}