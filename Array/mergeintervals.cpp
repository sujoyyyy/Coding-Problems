//Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n][2];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i][0];
        cin>>ar[i][1];
    }
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        if(ar[i][1]>=ar[i+1][0])
        {
            ar[i+1][0]=ar[i][0];
            ar[i][0]=-1;
        }
    }
    for (int i = 0; i <n; i++)
    {
        if(ar[i][0]!=-1)
        {
            cout<<"["<<ar[i][0]<<","<<ar[i][1]<<"] ";
        }
    }
    
    
    return 0;
}