//Find the Union and Intersection of the two sorted arrays.
#include<bits/stdc++.h>
using namespace std;
void printDuplicates(int arr[], int n) 
{ 
    int i; 
    int fl = 0; int t=0;
    for (i = 0; i < n; i++) { 
        if (arr[arr[i] % n] >= n) { 
            if (arr[arr[i] % n] < 2 * n) { 
                //cout << arr[i] % n << " ";
                t++;
                fl = 1; 
            } 
        } 
        arr[arr[i] % n] += n; 
    } 
    if (!fl) 
        cout << "-1"; 

    cout<<"Count of Intersection elements : "<<t<<endl;
    cout<<"Count of union elements : "<<n-t<<endl;
} 
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int ar1[n1],ar2[n2];
    cout<<"First array"<<endl;
    for (int i = 0; i < n1; i++)
    {
        /* code */
        cin>>ar1[i];
    }
    cout<<"Second array"<<endl;
    for (int i = 0; i < n2; i++)
    {
        /* code */
        cin>>ar2[i];
    }
   int ar3[n1+n2];
   for (int i = 0; i < n1; i++)
   {
       /* code */
       ar3[i]=ar1[i];
   }
   for (int i = 0; i < n2; i++)
   {
       /* code */
       ar3[n1+i]=ar2[i];
   }
    printDuplicates(ar3,n1+n2);   
    return 0;
}