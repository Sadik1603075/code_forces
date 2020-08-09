#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
int main()
{
    int a,b,f,k,i,j,l,x,c=0;
    scanf("%d%d%d%d",&a,&b,&f,&k);
    int arr[a+1];
    arr[0]=0;
    arr[1]=b;
    i=1;

    for(; ; i++,j--)
    {
        c++;
        arr[1] =arr[1]-1;
        printf("%d %d %d\n",i,j,arr[1]);
        if(i==f||j==f)
        {
            x=( a-i)*2;
            if(arr[1]-x<0)
            {
                arr[1]=b;
                arr[0]++;
            }

        }
        if(i==a)
        {
            j = a;
            i=1;
        }
        if(c==a*k)
        {
            break;
        }
    }
    printf("%d\n",arr[0]);


    return 0;

}
