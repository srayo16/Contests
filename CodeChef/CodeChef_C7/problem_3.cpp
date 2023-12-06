#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = 0;
        bool flag = true;
        for (int i = 0; i < 8; i++) // codetown
        {
            if ((i == 0 || i == 2 || i == 4 || i == 6 || i == 7) && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
            {
                continue;
            }
            else if ((i == 1 || i == 3 || i == 5) && (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'))
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}