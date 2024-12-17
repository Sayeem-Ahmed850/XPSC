// problem link : https://codeforces.com/problemset/problem/805/B
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

    int n; cin >> n;

    int x = 0;
    for(int i = 0; i < n; i++)
    {
        if(x < 2)
        {
            cout << "a";
            x++;
        }
        else if(x >= 2 && x < 4)
        {
            cout << "b";
            x++;
            if(x == 4) x = 0;
        }
    }
    return 0;
}