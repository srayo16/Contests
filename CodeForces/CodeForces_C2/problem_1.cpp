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
        if (n == 1)
        {
            cout << "First" << endl;
            continue;
        }
        if (n % 3 != 0)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }

    return 0;
}