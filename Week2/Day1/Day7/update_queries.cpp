#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s; cin >> s;

    set<int> st;
    for (int i = 0; i < m; i++)
    {
        int x; cin >> x;
        st.insert(x);
    }

    string c; cin >> c;
    sort(c.begin(), c.end());

    int i = 0;
    for (auto idx : st)
    {
        s[idx - 1] = c[i];
        i++;
    }
    cout << s << '\n';
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