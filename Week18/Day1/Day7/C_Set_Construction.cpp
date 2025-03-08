// problem link : https://codeforces.com/problemset/problem/1761/C
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<char> a[n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            char x; cin >> x;
            a[i].push_back(x-'0');
        }
    }

    for(int i = 0; i < n; i++)
    {
        vector<int> v;
        v.push_back(i);
        for(int j = 0; j < n; j++)
        {
            if(a[j][i]) v.push_back(j);
        }   
        cout << v.size() << " ";
        for(auto val : v) cout << val+1 << " ";   
        cout << nl;
    }
}

int main()
{   
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
