//Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers. If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order). The replacement must be in place and use only constant extra memory.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    if(n==1)
    {
        return 0;
    }
    int indx1,indx2;
    for(indx1=n-2;indx1>=0;indx1--)
    {
        if(a[indx1]<a[indx1+1])
        {
            break;
        }
    }
    if(indx1 < 0)
    {
        reverse(a.begin(),a.end());
        return 0;
    }
    for(indx2=n-1;indx2>=0;indx2--)
    {
        if(a[indx2]>a[indx1]){
            break;
        }
    } 
    swap(a[indx1],a[indx2]);
    reverse(a.begin()+indx1+1,a.end());
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}