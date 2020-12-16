/*Given an array of integers and a number k, where 1 <= k <= length of the array, compute the maximum values of each subarray of length k.
For example, given array = [10, 5, 2, 7, 8, 7] and k = 3, we should get: [10, 7, 8, 8], since:
10 = max(10, 5, 2)
7 = max(5, 2, 7)
8 = max(2, 7, 8)
8 = max(7, 8, 7)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,k;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>k;
    for(int i=0;i<=n-k;i++)           //O(nK) complexity :( use queue in case you want O(n) complexity.
    {
        int max=ar[i];
        for(int j=i;j<i+k;j++)
        {
            if(max<ar[j])
            max=ar[j];
        }
        cout<<max<<" ";
    }
    cout<<endl;
    return 0;
}