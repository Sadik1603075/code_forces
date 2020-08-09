#include<bits/stdc++.h>
using namespace std;
int arr1[105];

int main()
{
    int i,n,m=0,sum1=0,sum2=0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr1[i]);
        sum1+=arr1[i];
        if(arr1[i]>m)
            m= arr1[i];
    }
    while(1)
    {
        for(i=1;i<=n;i++)
        {
            sum2+=m-arr1[i];
        }
        if(sum2>sum1)
        {
            printf("%d\n",m);
            break;
        }
        sum2=0;
        m++;
    }
    return 0;
}
