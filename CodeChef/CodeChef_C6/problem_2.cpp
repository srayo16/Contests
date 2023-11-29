#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, n;
        cin >> x >> n;

        ll air = n / 100;
        if (n % 2 != 0)
        {
            air++;
        }
        if (air <= x)
        {
            cout << "0\n";
        }
        else
        {
            ll need = air - x;
            cout << need << '\n';
        }
    }
    return 0;
}