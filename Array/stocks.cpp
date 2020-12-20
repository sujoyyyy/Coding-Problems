//Say you have an array for which the ith element is the price of a given stock on day i. If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int profit=0;
    for (int i = 0; i < n; i++) cin>>ar[i];
    for (int i = 0; i < n-1; i++)
    { 
        int cp= ar[i];
        int sp=cp;
        for (int j = i+1; j < n; j++)
        {
            if(ar[j]>sp)
            sp=ar[j];
        }
        if(profit<(sp-cp)) profit=sp-cp;
    }
    cout<<profit<<endl;
    return 0;
}