/* Good morning! Here's your coding interview problem for today. This problem was asked by Airbnb.
Given a list of integers, write a function that returns the largest sum of non-adjacent numbers. Numbers can be 0 or negative.
For example, [2, 4, 6, 2, 5] should return 13, since we pick 2, 6, and 5. [5, 1, 1, 5] should return 10, since we pick 5 and 5.
Follow-up: Can you do this in O(N) time and constant space?*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    int incl= ar[0];
    int excl=0;
    for(int i=1;i<n;i++)
    {
        int excl1= (incl>excl)? incl:excl;
        incl=ar[i]+excl;
        excl=excl1;
    }
    int t = (incl>excl)?incl:excl;
    cout<<t;
    return 0;
}