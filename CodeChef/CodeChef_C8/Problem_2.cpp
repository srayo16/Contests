#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isZero(int n){
    if(n<0) return false;
    if(n==0) return true;

    return isZero(n-3) || isZero(n-4);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        // bool flag = false;
        // while (n>=0)
        // {   if(n==0) flag=true;
        //     if(n<0) break;
        //     if(n %2 ==0)n-=4;
        //     else n-=3;
        // }
        // flag? cout<<"YES"<<endl : cout<<"NO"<<endl;
        if(isZero(n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}