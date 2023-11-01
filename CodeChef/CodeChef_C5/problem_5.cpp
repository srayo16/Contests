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
        // n -= 1;
        // bool flag = true;
        // for (int i = 1; i <= n; i++)
        // {
        //     if (flag)
        //         flag = false;
        //     else
        //         flag = true;
        // }
        // flag ? cout << "Alice" << endl : cout << "Bob" << endl;

        if (n % 2 == 0 || n == 1) // bijor // prime minus 2-1
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}