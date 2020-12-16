//max and min in an array
#include<bits/stdc++.h>
using namespace std;
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
    int max=ar[0],min=ar[0];
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(max<ar[i]) max=ar[i];
        if(min>ar[i]) min=ar[i];
    }
    cout<<"MAX : "<<max<<" MIN : "<<min;
    return 0;
}
    