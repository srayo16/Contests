// Problem
// Chef has started a new job as an insurance agent.
// Each insurance costs
// �
// X dollars and Chef gets a
// 20
// %
// 20% commission on selling each insurance.

// Find the minimum number of insurances Chef needs to sell to earn at least
// 100
// 100 dollars.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        double usd = x * 0.2;
        double need = 100 / usd;
        cout << ceil(need) << endl;
    }

    return 0;
}