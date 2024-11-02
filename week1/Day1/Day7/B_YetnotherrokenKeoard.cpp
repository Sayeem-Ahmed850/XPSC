#include <bits/stdc++.h>
#define pi pair<char, int>
using namespace std;

class cmp
{
public:
    bool operator()(pi a, pi b)
    {
        return a.second < b.second;
    }
};

void solve()
{
    string s; cin >> s;
    stack<pi> lower, upper;

    int i = 0;
    for (char c : s)
    {
        if (!upper.empty() && c == 'B')
        {
            upper.pop();
        }
        else if (!lower.empty() && c == 'b')
        {
            lower.pop();
        }
        else
        {
            if (isupper(c) && c != 'b' && c != 'B')
            {
                upper.push({c, i});
            }
            if (islower(c) && c != 'b' && c != 'B')
            {
                lower.push({c, i});
            }
        }
        i++;
    }
    vector<pi> v;

    while(!upper.empty())
    {
        v.push_back({upper.top().first, upper.top().second});
        upper.pop();
    }
    while (!lower.empty())
    {
        v.push_back({lower.top().first, lower.top().second});
        lower.pop();
    }

    sort(v.begin(), v.end(), cmp());

    for(auto val : v)
    {
        cout << val.first;
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