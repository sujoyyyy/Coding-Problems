/*Good morning! Here's your coding interview problem for today.
This problem was asked by Twitter.
You run an e-commerce website and want to record the last N order ids in a log. Implement a data structure to accomplish this, with the following API:
a. record(order_id): adds the order_id to the log
b. get_last(i): gets the ith last element from the log. i is guaranteed to be smaller than or equal to N.
You should be as efficient with time and space as possible.
*/
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define MAX_SIZE 100
int cb[MAX_SIZE];     //Circular Buffer data structure
int curr=0;
void record(int order_id)
{
    cb[curr]=order_id;
    curr=(curr+1)%MAX_SIZE;
}
int get_last(int i)
{
    return(cb[(curr-i+MAX_SIZE)%MAX_SIZE]);
}

int main()
{
    record(5);
    record(1);
    record(6);
    record(7);
    cout<<get_last(2);
    return 0;
}