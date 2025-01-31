// problem link : https://codeforces.com/problemset/problem/1104/B
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

    vector<char> a;
    int cnt = 0;
    for(char c:s)
    {
        a.push_back(c);
        int n = a.size();
        if(n >= 2)
        {
            if(a[n-1] == a[n-2])
            {
                a.pop_back();
                a.pop_back();
                cnt++;
            }
        }
    }
    if(cnt%2 != 0) yes;
    else no;    
    return 0;
}