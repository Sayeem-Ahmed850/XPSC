// problem link : https://codeforces.com/problemset/status?my=on
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n, root = -1; 
    cin >> n;
    vector<int> a[n+1], b(n+1), c(n+1);
    for(int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        if(l != -1) a[l].push_back(i);
        else root = i;
        if(r == 1)
        {
            b[l]++;
            c[i] = 1;
        }
    }

    vector<int> ans;
    for(int i = 1; i <= n; i++)
    {
        if(root != i)
        {
            if(a[i].size() == b[i] && c[i] == 1) ans.push_back(i);
        }
    }

    if(ans.empty()) cout << -1 << nl;
    else
    {
        for(auto val : ans) cout << val << " ";
        cout << nl;
    }
    return 0;
}