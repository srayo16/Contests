#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int x;
    cin >> x;
    if (x < 3)
    {
        cout << "GOLD" << endl;
    }
    else if (x >= 3 && x < 6)
    {
        cout << "SILVER" << endl;
    }
    else if (x >= 6)
    {
        cout << "BRONZE" << endl;
    }
    return 0;
}