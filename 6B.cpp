#include<bits/stdc++.h>
using namespace std;

int arr[1005];

int main()
{
    int i,j,k,l,m,n,t;

    cin>>t;

    for(k=1;k<=t;k++)
    {
        cin>>n;

        for(i=1;i<=n;i++)
        {
            scanf("%d",&l);
            arr[l]++;
        }


        for(i=n-1;i>=1;i--)
        {
            arr[i] +=arr[i+1];
        }

        for(i=n;i>=1;i--)
        {
            if(arr[i]>=i)
            {
                printf("%d\n",i);
                break;
            }
        }

        memset(arr,0,sizeof(arr));
    }

    return 0;
}

