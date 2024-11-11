#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    map<string, int> mp;
    vector<string> save;


    while(n--)
    {
        string s; cin >> s;
        save.push_back(s);
    } 

    reverse(save.begin(), save.end());

    for(string val : save)
    {
        mp[val]++;
        if(mp[val] == 1)
        {
            cout << *++val.rbegin() << *val.rbegin();
        }
    }

    return 0;
}