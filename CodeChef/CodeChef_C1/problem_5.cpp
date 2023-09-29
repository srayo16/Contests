#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];

        double perHome = k / n;
        int c = ceil(perHome);

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                arr[i] = k - sum;
                break;
            }
            if (i % 2 == 0)
            {
                arr[i] = c;
                sum += c;
            }

            else
            {
                arr[i] = c + 1;
                sum += c + 1;
            }
        }
        // sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}