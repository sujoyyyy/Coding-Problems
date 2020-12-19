//Minimize the maximum difference between the heights
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int ans=ar[n-1]-ar[0];
    int small=ar[0]+k;
    int big=ar[n-1]-k;
    if(small>big) swap(small,big);
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        int add= ar[i]+k;
        int subtract=ar[i]-k;
        if(subtract>=small||add<=big) continue;
        if(big-subtract<=add-small)
        big=subtract;
        else
        {
            add=small;
        }        
    }
    ans=min(ans,big-small);
    cout<<ans<<endl; 
    return 0;
}