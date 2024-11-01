#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int n; cin >> n;
    map <string, int> mp;
    while (n--)
    {
        string s; cin >> s;
        if(mp[s] == 0)
        {
            cout << "NO" << '\n';
            mp[s]++;
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
    
    return 0;
}