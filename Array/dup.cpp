//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive. There is only one duplicate number in nums, return this duplicate number.
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
    sort(ar,ar+n);
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        if(ar[i]==ar[i+1])
        {
            cout<<ar[i]<<endl;
            break;
        }
    }
    return 0;
}