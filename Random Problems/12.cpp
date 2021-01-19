/*Good morning! Here's your coding interview problem for today.
This problem was asked by Amazon.
There exists a staircase with N steps, and you can climb up either 1 or 2 steps at a time. Given N, write a function that returns the number of unique ways you can climb the staircase. The order of the steps matters.
For example, if N is 4, then there are 5 unique ways:
1, 1, 1, 1
2, 1, 1
1, 2, 1
1, 1, 2
2, 2*/
#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    
    return fib(n-1)+fib(n-2);
}
int main()
{
    int N;
    cin>>N;
    cout<<fib(N+1);
    return 0;
}