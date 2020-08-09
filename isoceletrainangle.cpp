#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,i,l,b,sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum =0;
        scanf("%d",&b);
        b -=2;
         l = b/2;
         sum = (l*(l+1))/2;
         printf("%d\n",sum);


    }
    return 0;
}
