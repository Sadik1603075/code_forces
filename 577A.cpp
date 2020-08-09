#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i,j,val,sum=0,c=0;
    scanf("%d%d",&n,&val);
    for(i=1;i<=n;i++)
    {
        if(val%i==0&&(val/i)<=n)
            c++;
    }



printf("%d\n",c);
}

