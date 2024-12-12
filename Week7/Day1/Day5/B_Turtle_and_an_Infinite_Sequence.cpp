#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, m;
	cin >> n >> m;
	int x = max(0, n - m), y = n + m;
	while(1)
	{
		if(x >= y){
			break;
		}
		x = x | (x + 1);
	}
	cout << x << endl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}