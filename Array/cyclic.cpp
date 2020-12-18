//Cyclically rotate an array by one
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    int ar1[n];
    for (int i = 1; i < n; i++)
    {
        /* code */
        ar1[i]=ar[i-1];
    }
    ar1[0]=ar[n-1];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<ar1[i]<<" ";    
    }
    return 0;
}