// Problem
// Chefina has a binary string
// �
// S of odd length
// �
// N.
// She also has an operation string
// �
// o of length
// (
// �
// −
// 1
// )
// 2
// 2
// (N−1)
// ​
//   where
// �
// �
// ∈
// {
// &
// ,
// ∣
// ,
// ⊕
// }
// o
// i
// ​
//  ∈{&,∣,⊕}. Note that
// &
// ,
// ∣
// ,
// ⊕
// &,∣,⊕ denote the bitwise and, or, and xor operations respectively.

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
        string s;
        cin >> s;

        string a;

        char f = s[n - 3];
        char l = s[n - 2];

        int o = (n - 2) / 2;
        cout << f << " " << l << " " << o;
    }

    return 0;
}