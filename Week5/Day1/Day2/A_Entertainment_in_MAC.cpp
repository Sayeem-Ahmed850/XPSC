#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    string s1 = s;
    reverse(s.begin(), s.end());
    string s2 = s + s1, s3 = s1 + s;

    int flag = 1;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] > s2[i]){
            flag = 2;
            break;
        }
        else if (s2[i] > s1[i]){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] > s3[i]){
                flag = 3;
                break;
            }
        }
    }
    if (flag == 1) cout << s1 << nl;
    else if (flag == 2) cout << s2 << nl;
    else cout << s3 << nl;
}

int main()
{
    FIO;
    
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}