#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n; cin >> n;
    if(n % 2 == 0)
    {
        cout << n/2 << nl;
        for(int i = 0; i < n/2; i++) cout << 2 << " ";
        cout << nl;
    }
    else
    {
        cout << n/2 << nl;
        for(int i = 0; i < n/2-1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << nl;
    }

    return 0;
}