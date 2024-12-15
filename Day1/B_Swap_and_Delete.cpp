// problem link : https://codeforces.com/problemset/problem/1913/B
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
    string s; cin >> s;

    int zero = count(s.begin(), s.end(), '0');
    int one = count(s.begin(), s.end(), '1');

    string t = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            if(zero > 0)
            {
                t.push_back('0');
                zero--;
            }
            else break;
        }
        else
        {
            if(one > 0)
            {
                t.push_back('1');
                one--;
            }
            else break;
        }
    }
    cout << s.size() - t.size() << nl;   
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}