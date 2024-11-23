#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<long long int> pre(n);
    pre[0] = a[0];

    for(int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    int ans = 0;
    map<long long int, int> mp;
    for(int i = 0; i < n; i++)
    {
        if(pre[i] == k)
        {
            ans = max(ans, i + 1);
        }

        if(mp.find(pre[i] - k) != mp.end())
        {
            ans = max(ans, i - mp[pre[i] - k]);
        }
        if(mp.find(pre[i]) == mp.end())
        {
            mp[pre[i]] = i;
        }
    }
    cout << ans;
    return 0;
}