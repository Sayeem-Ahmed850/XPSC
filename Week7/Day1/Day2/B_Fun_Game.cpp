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
    string s, t;
    cin >> s >> t;

    if(s == t){
        yes;
        return;
    }

    int one = s.find('1');
    if(one == -1){
        no;
        return;
    }

    bool flag = true;
    for(int i = 0; i < n; i++)
    {
        if(s[i] != t[i])
        {
            if(one > i){
                flag = false;
                break;
            }
        }
    }
    if(flag) yes;
    else no;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}