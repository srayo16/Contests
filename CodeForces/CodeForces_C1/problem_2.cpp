// In the game show "Ten Words of Wisdom", there are n
//  participants numbered from 1
//  to n
// , each of whom submits one response. The i
// -th response is ai
//  words long and has quality bi
// . No two responses have the same quality, and at least one response has length at most 10
// .

// The winner of the show is the response which has the highest quality out of all responses that are not longer than 10
//  words. Which response is the winner?

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

        list<int> l;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            if (a <= 10)
            {
                l.push_back(b);
            }
            else
            {
                l.push_back(-1);
            }
        }
        int result = 0;
        int th = 0;
        for (int i = 0; i < n; i++)
        {
            int r = l.front();
            if (r != -1 && r > result)
            {
                result = r;
                th = i;
            }
            l.pop_front();
        }
        l.clear();
        cout << th + 1 << endl;
    }

    return 0;
}