#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
            cnt++;
    }

    if (cnt == 1)
    {
        cout << 1 << '\n';
    }
    else
    {
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'B')
                v.push_back(i);
        }

        int a = *max_element(v.begin(), v.end());
        int b = *min_element(v.begin(), v.end());

        int ans = (a - b) + 1;
        cout << ans << '\n';
    }
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