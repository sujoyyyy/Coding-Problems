/*Good morning! Here's your coding interview problem for today.
This problem was asked by Twitter.
Implement an autocomplete system. That is, given a query string s and a set of all possible query strings, return all strings in the set that have s as a prefix.
For example, given the query string de and the set of strings [dog, deer, deal], return [deer, deal].*/
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    string ar[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Enter search key"<<endl;
    string key;
    cin>>key;
    string match[100];
    int l= key.length();bool flag=false;int k=0;
    for(int i=0;i<n;i++)             //if you are really interested in coding read about Trie data structure in STL :) 
    {
        if(key[0]==ar[i][0])
        {
            for(int j=1;j<l;j++) //O(nl)
            {
                if(key[j]==ar[i][j])
                flag=true;
                else
                {
                    flag=false;
                }
                
            }
            if(flag)
            {match[k]=ar[i];k++;}
        }
    }
    cout<<"Matching strings"<<endl;
    for(int i=0;i<k+1;i++)
    {
        cout<<match[i]<<endl;
    }
    return 0;
}