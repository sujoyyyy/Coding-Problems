/*Good morning! Here's your coding interview problem for today.
This problem was asked by Facebook.
Given a stream of elements too large to store in memory, pick a random element from the stream with uniform probability.*/
#include<bits/stdc++.h>
#include <time.h> 
#include<stdlib.h>
int selectRandom(int k)
{
    static int count=0,result;
    count++;
    if(count==1)
    { result=k; }
    
    else 
    {
        int z= rand() % count;
        if(z==count-1)
        {
            result=k;
            
        }    
    }
   return result;
}
using namespace std;
int main()
{
    int ar[]={1,2,3,4};
    int n= sizeof(ar)/sizeof(int);
    srand(time(NULL));
    for (int i = 0; i < n; ++i) 
        printf("Random number from first %d numbers is %d \n", i+1, selectRandom(ar[i])); 
    return 0;
}