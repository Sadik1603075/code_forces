#include<bits/stdc++.h>
using namespace std;

int arr[100005];


int main()
{
    int c=0,i,n,m;
    int a,b,j,k,l;
    double water=0.00,sum=0.00;
    cin>>n>>a>>b;

    cin>>k;
    sum+=(k*1.00);
    arr[n];

    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        sum+=(arr[i]*1.00);
    }
    m=n;
    m--;
    sort(arr,arr+m);

    i=m-1;
    while(1)
    {
        water= (k*a*1.00)/sum;
        if(water<(b*1.00))
        {
          c++;
          sum-=(arr[i]*1.00);
        }
        else
        {
            break;
        }
        i--;
    }
    printf("%d\n",c);
    return 0;

}
