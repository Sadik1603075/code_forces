#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double a,b,i,j,k,l,d;
    int dd;

    int t;
    cin>>t;
    while(t--)
    {

    cin>>dd;
    if(dd==0)
    {
        printf("Y 0.0 0.0\n");
        continue;
    }
    if(dd<4)
    {
        printf("N\n");
        continue;
    }

    d =dd*1.00;

    k = (d*d*1.00)-(4.0*d*1.00);

    a =( d+sqrt(k))/2.00;
    b = (d-sqrt(k))/2.00;
    printf("Y %0.9Lf %0.9Lf\n",a,b);
    }
}
