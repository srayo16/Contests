// Problem
// Chef has started learning about the stock market and has already selected a favourite stock.

// He traded the stock for
// �
// N consecutive days. Let
// �
// �
// A
// i
// ​
//   denotes the profit earned by Chef on the
// �
// �
// ℎ
// i
// th
//   day.
// Note that
// �
// �
// <
// 0
// A
// i
// ​
//  <0 indicates that Chef had a loss on the
// �
// �
// ℎ
// i
// th
//   day.

// Chef wants to find the maximum amount of of profit he would have earned, if he skipped trading for exactly one day.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());

        // for (int i : arr)
        // {
        //     cout << i << " ";
        // }
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}