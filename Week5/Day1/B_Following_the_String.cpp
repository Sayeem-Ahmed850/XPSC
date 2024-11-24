#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, char>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    vector<char> ans;

    int c = 0;
    map<char, int> mp;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x == 0)
        {
            mp[char(c + 97)] = 1;
            ans.push_back(char(c + 97));
            c++;
        }
        else
        {
            for(auto[i, j] : mp)
            {
                if(j == x)
                {
                    ans.push_back(i);
                    mp[i]++;
                    break;
                }
            }
        }
    }
    for(auto val : ans) cout << val;
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