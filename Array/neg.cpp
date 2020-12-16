//Move all negative numbers to beginning and positive to end with constant extra space.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    int j=0;
    for (int i = 0; i <n; i++)
    {
        /* code */
        if(ar[i]<0)
        {
            if(i!=j)  swap(ar[i],ar[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }   
    return 0;
}