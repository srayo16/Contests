#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n+5];
        int countOne=0;
        int countZero=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]==0)countZero++;
            else if(arr[i]==1) countOne++;
        }
        int minI = min(countOne,countZero); 
        if(countOne<countZero)cout<<min(countOne,n/2)<<endl;
        else cout<<min(countZero,n/2)<<endl;
        
    }
    
    return 0;
}