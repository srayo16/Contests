#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        ll res = x / y;

        if (res > 20)
        {
            cout << 20 << endl;
        }
        else
        {
            cout << res << endl;
        }
    }

    return 0;
}