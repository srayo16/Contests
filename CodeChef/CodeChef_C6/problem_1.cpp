#include <iostream>
using namespace std;

int main()
{
    int w, h;
    cin >> w >> h;
    int cH = 130, cW = 60;
    if (cH >= h && cW <= w)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
