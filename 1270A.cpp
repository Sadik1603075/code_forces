#include<bits/stdc++.h>
using namespace std;
int p1[105];
int p2[105];

int main()
{
    int i,j,k1,k2,l,n,m=0,m1=0,m2=0,t,k;
    cin>>t;

    for(k=1;k<=t;k++)
    {
        scanf("%d%d%d",&n,&k1,&k2);
        m1=0;
        m2=0;

        for(i=1;i<=k1;i++)
        {
            scanf("%d",&p1[i]);
            m1 = max(m1,p1[i]);
        }

        for(i=1;i<=k2;i++)
        {
            scanf("%d",&p2[i]);
            m2 = max(m2,p2[i]);
        }

        if(m1>m2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }


    }
}
