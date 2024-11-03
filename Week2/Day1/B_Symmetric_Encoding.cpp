#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    string str; cin >> str;

    set<char> st;
    for (char c : str)
    {
        st.insert(c);
    }

    map<char, char> mp;
    int l = 0, r = st.size();
    auto it1 = st.begin();
    auto it2 = st.rbegin();

    while (l < r)
    {
        mp[*it1] = *it2;
        mp[*it2] = *it1;
        l++, r--;
        it1++, it2++;
    }

    for (char c : str)
    {
        if (mp[c] != '\0')
        {
            cout << mp[c];
        }
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