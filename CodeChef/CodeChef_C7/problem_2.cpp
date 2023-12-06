#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int total = x * y;
        int res = total / 2;
        if (z > res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}