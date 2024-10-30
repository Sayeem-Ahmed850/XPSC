#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    string s;
    map<string, int> mp;

    int track = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        track = mp.size();
        mp[s]++;
        if (mp.size() != track)
        {
            cout << "OK" << '\n';
        }
        else
        {
            cout << s << mp[s] - 1 << '\n';
        }
    }
    return 0;
}