#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll count = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                count++;
                // cout << "ENTER"
                //      << " ";
            }
        }
        ll res = count * 2;
        cout << res << endl;
    }

    return 0;
}