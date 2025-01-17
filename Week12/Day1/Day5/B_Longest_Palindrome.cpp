#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n, m;
    cin >> n >> m;
    map<string, int> mp;
    string first = "", mid = "", last = "";
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        string x = s;
        reverse(x.begin(), x.end());    
        if(s == x)
        {
            mid = s;
        }      
        else if(mp.find(x) != mp.end())
        {
            first = s+first;
            last = last+x;
        } 
        mp[s]++;
    }
    int siz = first.size()+mid.size()+last.size();
    cout << siz << nl;
    cout << first << mid << last << nl;
    
    return 0;
}