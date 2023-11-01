#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, d;
        cin >> n >> x >> d;
        int totalEat = x * 5;
        int totalDay = n / totalEat;
        int sumWithBonusDay = totalDay + d;
        cout << sumWithBonusDay << endl;
    }

    return 0;
}