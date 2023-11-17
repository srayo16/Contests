#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll mx = LONG_MIN;
        ll mn = LONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
            mn = min(mn, arr[i]);
        }

        ll res = mx - mn;
        cout << mx << " " << mn << " " << res << endl;
    }

    return 0;
}