// problem link : https://codeforces.com/problemset/problem/1111/A
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
    
    string s, t;
    cin >> s >> t;

    int n = s.size(), m = t.size();
    if(n != m) no;
    else
    {
        string vowels = "aeiou";
        bool ans = true;
        for(int i = 0; i < n; i++)
        {
            bool flag1 = false, flag2 = false;
            for(char c : vowels)
            {
                if(c == s[i]) flag1 = true;
                if(c == t[i]) flag2 = true;
            }
            if(flag1 != flag2) {ans = false; break;};
        }
        if(ans) yes;
        else no;
    }
    return 0;
}