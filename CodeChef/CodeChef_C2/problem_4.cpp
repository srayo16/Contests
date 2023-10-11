#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, s;
        cin >> n >> s;

        if (s % 8 == 0)
        {
            cout << s << endl;
        }
        else
        {
            bool flag = true;
            while (true)
            {
                s += 1;
                string x = to_string(s);

                if (x.size() > n)
                {
                    break;
                }
                if (s % 8 == 0)
                {
                    flag = false;
                    cout << s << endl;
                    break;
                }
            }
            flag &&cout << -1 << endl;
        }
    }

    return 0;
}