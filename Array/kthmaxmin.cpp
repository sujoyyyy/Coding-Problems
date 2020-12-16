//Find kth max and min in an array.
#include<bits/stdc++.h>
using namespace std;
int k;
void kmax(vector<int>v)
{
    make_heap(v.begin(),v.end());
    for (int i = 0; i < k-1; i++)
    {
        pop_heap(v.begin(),v.end());
        v.pop_back();
    }
    cout<<"Kth Max : "<<v.front()<<endl;
}
void kmin( priority_queue <int, vector<int>, greater<int> > pq)
{
    for (int i = 0; i < k-1; i++)
    {
        /* code */
        pq.pop();
    }
    cout<<"Kth Min : "<<pq.top()<<endl;    
}
int main()
{
    vector<int> v;
    priority_queue <int, vector<int>, greater<int> > pq;
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        pq.push(x);
    }
    cout<<"Enter k"<<endl;
    cin>>k;
    kmax(v);
    kmin(pq);
    return 0;  
}