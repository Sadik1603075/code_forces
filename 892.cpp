#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long cola,i,sum=0,sum1=0;
    scanf("%I64d",&cola);
    long long arr1[cola];
    long long arr2[cola];
    for(i=0;i<cola;i++)
    {
        scanf("%I64d",&arr1[i]);
        sum+= arr1[i];
    }
    for(i=0;i<cola;i++)
    {
        scanf("%I64d",&arr2[i]);
    }
    sort(arr2,arr2+cola);

    sum1= arr2[cola-1]+arr2[cola-2];

    if(sum<=sum1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
