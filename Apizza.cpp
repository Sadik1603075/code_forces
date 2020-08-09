#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);

    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    //for(i1=0,,j1=1,j2=n-2,i2=n-1; ; i1+=2,i2-=2,j1+=2,j2-=2)
}
