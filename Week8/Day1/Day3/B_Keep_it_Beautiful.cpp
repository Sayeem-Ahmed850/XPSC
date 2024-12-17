// problem link : https://codeforces.com/problemset/problem/1841/B
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> q(n);
    for(int i = 0; i < n; i++) cin >> q[i];

    vector<int> a;
    a.push_back(q[0]);
    cout << 1;

    bool flag = false;
    for(int i = 1; i < n; i++)
    {
        if(flag)
        {
            if(q[i] <= a.front() && q[i] >= a.back())
            {
                cout << 1;
                a.push_back(q[i]);
            }
            else cout << 0;
        }
        else
        {
            if(q[i] >= a.back())
            {
                cout << 1;
                a.push_back(q[i]);
            }
            else
            {
                if(q[i] <= a.front())
                {
                    flag = true;
                    cout << 1;
                    a.push_back(q[i]);
                }
                else cout << 0;
            }
            
        }
    }
    cout << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}