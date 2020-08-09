#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[303][303];

int main()
{
    ll t,i,n,k,m,j;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        ll ok=0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%lld",&k);

                if(k>4)
                {
                    ok=1;
                }

                if(i==1 || j == 1 || i==n || j==m)
                {
                    if(k>3)
                    {
                        ok=1;
                    }
                }
                if(i==1 && j == 1)
                {
                    if(k>2)
                        ok=1;
                }
                else if(i==1 && j==m)
                {
                    if(k>2)
                        ok=1;
                }
                else if(i==n && j==1)
                {
                    if(k>2)
                        ok=1;
                }
                else if(i==n && j==m)
                {
                    if(k>2)
                        ok=1;
                }
            }
        }
        if(ok)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");

            arr[1][1]=2;
            arr[n][1]=2;
            arr[1][m]=2;
            arr[n][m]=2;
            for(i=2;i<n;i++) arr[i][1] = 3;
            for(i=2;i<m;i++) arr[1][i] = 3;
            for(i=2;i<m;i++) arr[n][i] = 3;
            for(i=2;i<n;i++) arr[i][m] = 3;

            for(i=2; i<n; i++)
            {
                for(j=2; j<m; j++)
                {
                    arr[i][j] = 4;
                }
            }

            for(i=1;i<=n;i++)
            {
                for(j=1;j<=m;j++)
                {
                    printf("%lld ",arr[i][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}

