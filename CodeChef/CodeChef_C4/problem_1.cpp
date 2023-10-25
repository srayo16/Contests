#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    ll f = n * x;
    ll s = m * y;
    ll res = f + s;
    cout << res << endl;
    return 0;
}