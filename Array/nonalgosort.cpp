//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int z=0,t=0,o=0;
    for(int i = 0; i <n; i++)
    {
        if(ar[i]==0) z++;
        if(ar[i]==1) o++;
        if(ar[i]==2) t++;
    }
    int j=0;
    for (int i = 0; i < z; i++)
    {
        ar[j]=0;j++;
    }
    for (int i = 0; i < o; i++)
    {
        ar[j]=1;j++;
    }
    for (int i = 0; i < t; i++)
    {
        ar[j]=2;j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }   
    return 0;
}