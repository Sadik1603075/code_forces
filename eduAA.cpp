#include<bits/stdc++.h>
using namespace std;

long long arr[2000005],sum=0;
int main()
{
    int i,j,k,l,n;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>l;
        sum +=l;
        arr[i]=sum;
    }
    if(sum%2==0)
        sum=sum/2;
    else
        sum=(sum/2)+1;

    for(i=1;i<=n;i++)
    {
        if(arr[i]>=sum)
        {
            printf("%d\n",i);
            break;
        }

    }
    return 0;


}
