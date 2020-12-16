//Reverse the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    
    for (int i = 0; i < n/2; i++)
    {
        int t= ar[i];
        ar[i]=ar[n-i-1];
        ar[n-i-1]=t;
    }
    cout<<"Reversed Array"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<ar[i]<<" ";
    }
    
    return 0;
}