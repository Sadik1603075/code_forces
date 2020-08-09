#include<bits/stdc++.h>
using namespace std;

int r[105];
int b[105];
int ans[105];

int main()
{
    int i,j,k,l,m,n,t,sum=0,c=0,c1=0;

    cin>>n;

    for(i=1;i<=n;i++)
        cin>>r[i];
    for(i=1;i<=n;i++)
        cin>>b[i];

    for(i=1;i<=n;i++)
    {
        if(r[i]==b[i])
        {
            ans[i]=1;
            c1++;
            continue;
        }
        if(r[i]==0 && b[i]==1)
        {
           ans[i]=1;
           sum++;
           continue;
        }
        if(r[i]==1 && b[i]==0)
        {
            c++;
        }

    }

    if(c1==n || c==0)
    {
        printf("-1\n");
        return 0;
    }

    for(i=1;i<=105;i++)
    {
        if(c*i>sum)
        {
            printf("%d\n",i);
            break;
        }
    }

}
