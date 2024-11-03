#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int n, x;
    cin >> n >> x;

    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int val; cin >> val;
        if(val != x)
        {
            v.push_back(val);
        }
    }

    for(int val : v)
        cout << val << " ";
    return 0;
}