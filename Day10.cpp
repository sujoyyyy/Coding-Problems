/*Good morning! Here's your coding interview problem for today.
This problem was asked by Apple.
Implement a job scheduler which takes in a function f and an integer n, and calls f after n milliseconds.*/
#include<bits/stdc++.h>
#include<chrono>
using namespace std;
void f()
{
    cout<<"Hello"<<endl;
}
int scheduler(void f(void), int n)
{
    for (auto start = std::chrono::steady_clock::now(), now = start; now < start + std::chrono::seconds{n}; now = std::chrono::steady_clock::now()); //wait loop for n seconds
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