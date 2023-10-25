#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    while (t--)
    {
        int n;
        cin >> n;
        int j = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (j > 6)
            {
                j = 0;
            }
            if (arr[j] == 2)
            {
                ans++;
            }
            j++;
        }
        cout << ans << endl;
    }

    return 0;
}