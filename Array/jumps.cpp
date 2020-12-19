//Given an array of integers where each element represents the max number of steps that can be made forward from that element. Write a function to return the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then cannot move through that element.
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
    int *jumps = new int[n]; jumps[0] = 0;
    int i,j;
    for ( i = 1; i < n; i++)
    {
        jumps[i]=INT_MAX;
        for ( j = 0; j < i; j++)
        {
            /* code */
            if(i<=j+ar[j] && jumps[j]!=INT_MAX)
            {
                jumps[i]=min(jumps[i],jumps[j]+1);
                break;
            }
        }
    }
    cout<<jumps[n-1]<<endl;
    return 0;
}