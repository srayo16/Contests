// Suneet has three digits a
// , b
// , and c
// .

// Since math isn't his strongest point, he asks you to determine if you can choose any two digits to make a sum greater or equal to 10
// .

// Output "YES" if there is such a pair, and "NO" otherwise.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b >= 10 || b + c >= 10 || a + c >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}