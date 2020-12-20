// For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum.
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
    int t=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)  
           if (ar[j] > ar[j+1])
           { 
              swap(ar[j],ar[j+1]);
              t++; 
           }
    }
    cout<<t<<endl;    
    return 0;
}