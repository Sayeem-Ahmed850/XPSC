#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < m; i++) cin >> b[i];

    vector<int> ans;
    int l = 0, r = 0, cnt = 0;

    while(r < m)
    {
        if(l < n && a[l] < b[r])
        {
            l++, cnt++;
        }
        else
        {
            ans.push_back(cnt);
            r++;
        }
    }
    for(int val : ans) cout << val << " ";

    return 0;
}