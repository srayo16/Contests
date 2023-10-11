#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n = 6;
        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        string s;
        for (int i = 0; i < 3; i++)
        {
            s += to_string(arr[i]);
        }
        sort(s.begin(), s.end(), greater<char>());
        // cout << s2 << endl;

        string s2;
        for (int i = 3; i < 6; i++)
        {
            s2 += to_string(arr[i]);
        }
        sort(s2.begin(), s2.end(), greater<char>());
        // cout << s2 << endl;

        int f = stoi(s);
        int sec = stoi(s2);

        if (f == sec)
        {
            cout << "Tie" << endl;
        }
        else if (f > sec)
        {
            cout << "Alice" << endl;
        }
        else if (sec > f)
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}