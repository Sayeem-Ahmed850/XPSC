#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string str; cin >> str;

    int frq[26] = {0};
    for (char c : str)
    {
        frq[int(c - 'a')]++;
    }

    int odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (frq[i] % 2 != 0) odd++;
    }

    if ((odd - 1) > k)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while (t--)
        solve();
        
    return 0;
}