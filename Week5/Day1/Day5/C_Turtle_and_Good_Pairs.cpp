#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    map<int, int> mp;
    for(char c : s){
        int x = c - 'a';
        mp[x]++;  
    }

    int i = 0;
    while(i < n)
    {
        for(int j = 0; j < 26; j++)
        {
            if(mp[j] != 0){
                cout << char(j + 'a');
                mp[j]--;
                i++;    
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