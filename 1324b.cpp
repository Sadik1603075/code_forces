#include<bits/stdc++.h>
using namespace std;

int arr[5005];

int main()
{
    int i,j,k,l,m,n,t;
    cin>>t;

    while(t--)
    {
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int ans=0;
        for(i=1;i<=n-2;i++)
        {
            for(j=i+2;j<=n;j++)
            {
                if(arr[i]==arr[j])
                {
                   ans=1;
                   break;
                }
            }
        }

        if(ans)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
