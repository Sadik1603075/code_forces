
#include<bits/stdc++.h>
using namespace std;

int p[200005];
int arr[200005];

int c=0;

int findd(int x,int y)
{
    c++;
    if(p[x]==y)
        return c;
    return arr[x] = findd(p[x],y);
}


int main()
{
    int i,j,k,l,m,n,t;
    cin>>t;

    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&p[i]);
        }

        for(i=1;i<=n;i++)
        {
            c=0;

            if(arr[i]==0)
             {
                 findd(i,i);

             arr[i] = c;
             arr[p[i]]=c;
             }
        }
        for(i=1;i<=n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");

        memset(arr,0,sizeof(arr));

    }


    return 0;
}
