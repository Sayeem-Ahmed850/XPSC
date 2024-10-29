#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int n; cin >> n;

    string s1, s2;
    map<pair<string, string>, int> mp;

    for(int i = 0; i < n; i++)
    {
        cin >> s1 >> s2;
        mp[{s1, s2}] = 0;
    }

    cout << mp.size();
    return 0;
}