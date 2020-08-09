#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,k,i,m;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    if(k>2)
    {
        m = a[0];
        for(i=0;i<n ; i++)
        {
            if(a[i]>m)
            {
                m=a[i];
            }
        }
           printf("%d\n",m);
    }
    else if(k<2)
    {
        m= a[0];
        for(i=0; i<n ; i++)
        {
            if(a[i]<m)
            {
                m =a[i];
            }
        }
          printf("%d\n",m);
    }
    else if(k==2)
    {
        if(a[0]>a[n-1])
        {
            printf("%d\n",a[0]);
        }
        else
        {
            printf("%d\n",a[n-1]);
        }
    }
    return 0;
}

