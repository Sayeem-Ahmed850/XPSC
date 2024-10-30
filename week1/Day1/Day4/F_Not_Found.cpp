#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin >> s;
    int n = s.length();

    int frq[26] = {0};

    for (int i = 0; i < n; i++)
    {
        int x = s[i] - 'a';
        frq[x]++;
    }

    for (int i = 0; i < 26; i++)
    {
        char c = i + 'a';
        if (frq[i] == 0)
        {
            cout << c;
            return;
        }
    }
    cout << "None";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}