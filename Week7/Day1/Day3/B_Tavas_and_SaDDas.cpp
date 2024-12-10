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
    string s = to_string(n);
    
    int powSum = 0;
    for(int i = 1; i <= s.size() - 1; i++){
        powSum += pow(2, i);
    }

    string bit;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '4') 
            bit.push_back('0');
        else 
            bit.push_back('1');
    }

    int idx = 0;
    for(int i = bit.size() - 1; i >= 0; i--)
    {
        if(bit[i] == '1') idx += (1 << i);
    }
    cout << (idx + (1 << s.size()-1) + powSum) + 1;
    return 0;
}