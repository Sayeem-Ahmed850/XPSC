#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<string> v;

    int i = n - 1;
    while (i >= 0)
    {
        string x;
        if (s[i] == '0')
        {
            i--;
            int j = 0;
            while (i >= 0 && j < 2)
            {
                x.push_back(s[i]);
                i--;
                j++;
            }
            v.push_back(x);
        }
        else
        {
            x.push_back(s[i]);
            v.push_back(x);
            i--;
        }
    }

    string ans;
    for(auto val : v)
    {
        reverse(val.begin(), val.end());
        
        int x = stoi(val);
        ans.push_back(char(97 + (x - 1)));
    }
    reverse(ans.begin(), ans.end());

    cout << ans << '\n';
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