#include<bits/stdc++.h>
using namespace std;

int arr[105];

int main()
{
    int i,j,k,l,m,n,t;
    cin>>t;

    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr+1,arr+n+1);

        int ans=0;

        for(i=1;i<n;i++)
        {
            if(arr[i+1]-arr[i]==1)
            {
                ans=1;
                break;
            }
        }

        if(ans)
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }


    }


            return 0;
}
