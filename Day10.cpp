/*Good morning! Here's your coding interview problem for today.
This problem was asked by Apple.
Implement a job scheduler which takes in a function f and an integer n, and calls f after n milliseconds.*/
#include<bits/stdc++.h>
#include<chrono>
#include<unistd.h>
using namespace std;
void f()
{
    cout<<"Hello"<<endl;
}
int scheduler(void f(void), int n)
{
    sleep(n/1000); //wait for n milliseconds
    f();
    return 0;// successful scheduling
}
int main()
{
    int n;
    cin>>n;
    int c =scheduler(f,n);
    if(c==0)
    return 0;
    else
    {
        main();
    }
    
}