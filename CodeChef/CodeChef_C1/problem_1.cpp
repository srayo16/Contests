// Problem
// The newspaper in Chefland consists of
// 10
// 10 pages numbered
// 1
// 1 to
// 10
// 10.
// The last
// 3
// 3 pages of the newspaper are always dedicated to the sports section.

// Given a random page number
// �
// X, determine whether that page is dedicated to the sports section.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x >= 8 && x <= 10)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}