/*Good morning! Here's the coding interview problem for today.
This problem was recently asked by Google.
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
Bonus: Can you do this in one pass?*/
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> ar;
    bool ans=false;
    int x;
    for(int i=0;i<n;i++){cin>>x;  ar.push_back(x);}
    sort(ar.begin(),ar.end());
    int beg=0;
    int end=n-1;
    while (beg<=end) //binary search technique(one pass traversal)
    {
        int sum= ar[beg]+ar[end];
        if(sum==k)
        {
            ans= true;
            break;
        }
        else if(sum>k )
        end=end-1;
        else
        beg=beg+1;
    }
    
   cout<<ans; //1=true; 0=false;
   return 0;
}