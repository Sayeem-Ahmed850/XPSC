#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> mp;
    for(int val : v)
    {
        mp[val]++;
    }

    int max = 0;
    for(auto [x, y] : mp)
    {
        if(y > max) max = y;
    }
    cout << max << '\n';





    return 0;
}