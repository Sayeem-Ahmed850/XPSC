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

    string a, b;
    cin >> a >> b;

    int a_ans = 0, b_ans = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '+') a_ans++;
        if(a[i] == '-') a_ans--;
        if(b[i] == '+') b_ans++;
        if(b[i] == '-') b_ans--;
    }

    int cnt = count(b.begin(), b.end(), '?');
    double prb = 0;
    for(int i = 0; i < (1 << cnt); i++)
    {
        int ans = b_ans;
        for(int j = 0; j < cnt; j++)
        {
            if((i >> j) & 1)
                ans++;
            else
                ans--;
        }
        if(ans== a_ans) prb++;
    }
    cout << fixed << setprecision(12) << prb / (1 << cnt) << nl;
    
    return 0;
}