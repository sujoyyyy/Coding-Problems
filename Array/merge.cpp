//Merge Without Extra Space
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar1[] = {1, 3, 5, 7};
    int ar2[] = {0, 2, 6, 8, 9};
    int m=5, n=4;
   for (int i=n-1; i>=0; i--) 
    { 
        int j, last = ar1[m-1]; 
        for (j=m-2; j >= 0 && ar1[j] > ar2[i]; j--) 
            ar1[j+1] = ar1[j]; 
  
        // If there was a greater element 
        if (j != m-2 || last > ar2[i]) 
        { 
            ar1[j+1] = ar2[i]; 
            ar2[i] = last; 
        } 
    } 
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<ar1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i <5; i++)
    {
        /* code */
        cout<<ar2[i]<<" ";
    }
    return 0;
}