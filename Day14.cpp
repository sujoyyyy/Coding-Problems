/*Good morning! Here's your coding interview problem for today.
This problem was asked by Google.
The area of a circle is defined as πr^2. Estimate π to 3 decimal places using a Monte Carlo method.
Hint: The basic equation of a circle is x2 + y2 = r2.*/
#include<bits/stdc++.h>
using namespace std;
#define val 10000
int main()
{
    double pi;
    srand(time(NULL));double rcircle=0, rsquare=0;
    for(int i=0;i<val*val;i++)
    {
        double rx = double(rand() % (val)) / val; 
        double ry = double(rand() % (val)) / val; 
        
        double d= rx*rx+ry*ry;
        if(d<=1)
        rcircle++;

        rsquare++;

        pi= double(4*(rcircle/rsquare));
       
    }

    printf("%f\n",pi);
    return 0;

}
