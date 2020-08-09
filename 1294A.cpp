#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n,i,j,k,l,t,m=0,sum=0;

    cin>>t;

    for(k=1;k<=t;k++)
    {
        sum=0;
        scanf("%d%d%d%d",&a,&b,&c,&n);

        m = max(a,b);
        m = max(m,c);

        sum += (m-a);
        sum += (m-b);
        sum += (m-c);

        n-= sum;

        if(n<0)
        {
            printf("NO\n");
        }
        else
        {
            l = n%3;
            if(l==0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }

    }

}
