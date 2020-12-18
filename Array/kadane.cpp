//Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int msf=INT_MIN,meh=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        meh=meh+ar[i];
        if(msf<meh)
        msf=meh;
        if(meh<0)
        meh=0;
    }
    cout<<msf<<endl;    
    return 0;
}