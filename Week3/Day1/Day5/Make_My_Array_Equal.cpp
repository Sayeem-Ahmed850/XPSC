#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;

    set<int> s;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        s.insert(x);
    }

    if(s.size() == 1)
    {
        cout << "YES" << '\n';
    }
    else if(s.size() == 2)
    {
        if(s.count(0) == true)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    else
    {
        cout << "NO" << '\n';
    }

}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}