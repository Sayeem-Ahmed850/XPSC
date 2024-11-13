#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    deque<int> d;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d.push_back(x);
        mp[x]++;
    }

    int ans = 0;
    int dup = n - mp.size();
    while (1)
    {
        if (dup == 0) break;
        if (mp[d.front()] == 1)
        {
            mp.erase(d.front());
            d.pop_front();
            ans++;
        }
        else
        {
            dup--;
            mp[d.front()]--;
            d.pop_front();
            ans++;
        }
    }
    
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