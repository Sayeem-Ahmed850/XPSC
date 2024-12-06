#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    string s; cin >> s;

    string x;
    for(char c : s)
    {
        if(c == 'h' || c == 'e' || c == 'l' || c == 'o') x.push_back(c);
    }

    

    cout << x;
    return 0;
}