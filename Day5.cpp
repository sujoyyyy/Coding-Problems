/*Good morning! Here's your coding interview problem for today.
This problem was asked by Jane Street.
cons(a, b) constructs a pair, and car(pair) and cdr(pair) returns the first and last element of that pair. For example, car(cons(3, 4)) returns 3, and cdr(cons(3, 4)) returns 4.*/
#include<bits/stdc++.h>
#include<utility>
using namespace std;
int* cons(int a,int b)
{
	static int p[2];
	p[0]=a;
	p[1]=b;
	return p;
}
int car(int p[])
{
	int x= p[0];
	return x;
}
int cdr(int p[])
{
	int y= p[1];
	return y;
}
int main()
{
	int a,b;
	int *p;
	cin>>a>>b;
	p = cons(a,b);
	int x= car(p);
	int y= cdr(p);
	cout<<"First--"<<x<<endl;
	cout<<"Second--"<<y<<endl;
	return 0;
}