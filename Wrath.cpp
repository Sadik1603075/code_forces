#include<iostream>
#include<stdio.h>
using namespace std;
int arr[1000001];
int main()
{
    int i,j,k,l,c=0,sum=0,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>0;i--)
    {
        if(a[i]>0)
        {
            arr[i] -= 1;
            printf("%d %d ",i,arr[i]);
            printf(" %d",a[i]);
            arr[i-a[i]-1] +=1;
            printf(" %d ",arr[i-a[i]-1]);
            printf("\n");
        }

    }
    for(i=1;i<n;i++)
    {
        sum +=arr[i];
        arr[i]=sum;
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        if(arr[i]==0)
            c++;
    }
    printf("\n%d ",c);
    return 0;
}
