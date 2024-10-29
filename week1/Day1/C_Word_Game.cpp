#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    int m = 3;

    map<string, vector<int>> mp;
    string s;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> s;
            mp[s].push_back(i + 1);
        }
    }

    vector<int> ans (m + 1);

    for(auto [key, val] : mp)
    {
        vector<int> v = val;
        if(v.size() == 1)
        {
            ans[v[0]] += 3;
        }
        else if(v.size() == 2)
        {
            ans[v[0]]++;
            ans[v[1]]++;
        }
    }

    for(int i = 1 ; i <= m; i++)
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int t; cin >> t;
    while(t--)  
        solve();

    return 0;
}