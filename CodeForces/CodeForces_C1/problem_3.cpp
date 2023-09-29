// On an 8×8
//  grid of dots, a word consisting of lowercase Latin letters is written vertically in one column, from top to bottom. What is it?

// Input
// The input consists of multiple test cases. The first line of the input contains a single integer t
//  (1≤t≤1000
// ) — the number of test cases.

// Each test case consists of 8
//  lines, each containing 8
//  characters. Each character in the grid is either .
//  (representing a dot) or a lowercase Latin letter (a
// –z
// ).

// The word lies entirely in a single column and is continuous from the beginning to the ending (without gaps). See the sample input for better understanding.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        for (int i = 0; i < 8; i++)
        {
            string val;
            cin >> val;

            for (char a : val)
            {
                if (a != '.' && a >= 'a' && a <= 'z')
                {
                    s += a;
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}