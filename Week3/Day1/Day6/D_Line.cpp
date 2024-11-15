#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i - 1] == 'L')
            sum += i - 1;
        else
            sum += n - i;
    }

    vector<ll> ans;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (s[l] == 'L')
        {
            s[l] = 'R';
            sum -= l;
            sum += n - (l + 1);
            ans.push_back(sum);
        }
        if (s[r] == 'R')
        {
            s[r] = 'L';
            sum -= n - (r + 1);
            sum += r;
            ans.push_back(sum);
        }
        l++, r--;
    }

    if (sum == 0)
    {
        cout << 0 << '\n';
    }
    else if (ans.size() == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << sum << " ";
        }
        cout << '\n';
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i < ans.size())
                cout << ans[i] << " ";
            else
                cout << ans[ans.size() - 1] << " ";
        }
        cout << '\n';
    }
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