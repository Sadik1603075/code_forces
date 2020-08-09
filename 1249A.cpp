#include<bits/stdc++.h>
using namespace std;

int p[205];
int c=0;

void findd(int x,int y)
{
    c++;
    if(p[x]==y)
        return ;
    findd(p[x],y);
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

             findd(i,i);
             printf("%d ",c);
        }
        printf("\n");

    }


    return 0;
}
