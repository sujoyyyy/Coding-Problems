/*Good morning! Here's your coding interview problem for today.
This problem was asked by Uber.
Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
Follow-up: what if you can't use division?*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; //size of the array
    int ar1[n],ar2[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar1[i];//input array
    }
    for(int i=0;i<n;i++)
    {
        ar2[i]=1;//initialize the array with 1 because product has to be calculated
    }    
    for(int i=0;i<n;i++) //Complexity is O(n^2) :( will look forward to reducing it.
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue; //main logic of the problem
            else
                ar2[i]=ar2[i]*ar1[j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<ar2[i]<<" "<<endl; //output
    }
    return 0;
}
//Happy Coding