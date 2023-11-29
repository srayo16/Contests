#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int getMx = max(a, b);
        int getMn = min(a, b);

        if (getMx % getMn == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int g = 0;
        int r = getMx;
        while (true)
        {
            if (getMx % getMn == 0)
            {
                cout << g << endl;
                break;
            }
            else
            {
                getMn--;
                getMx++;
                g++;
                continue;
            }
        }
    }

    return 0;
}