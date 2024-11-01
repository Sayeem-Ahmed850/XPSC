#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int n, m;
    cin >> n >> m;

    map<string, string> mp;
    string name, ip;
    for(int i =0; i < n; i++)
    {
        cin >> name >> ip;
        mp[ip] = name;
    }

    string a , b;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        b.pop_back();

        cout << a << " " << b << "; " << "#" << mp[b] << '\n';
    }
    return 0;
}