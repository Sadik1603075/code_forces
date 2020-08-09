#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,c,m,x,q,sum=0;
    cin>>q;

    for(k=1;k<=q;k++)
    {
        sum=0;
        scanf("%d%d%d",&c,&m,&x);

        sum = (c+m)/3;



        if(c==0||m==0)
        {
            printf("0\n");
            continue;
        }
        if(x>c&&x>m)
        {
            printf("%d\n",min(c,m));
            continue;
        }

        if(m<sum)
        {
            printf("%d\n",m);
            continue;
        }
        if(c<sum)
        {
            printf("%d\n",c);
            continue;
        }
    if(x==0)
    {
        printf("%d\n",(c+m)/3);
        continue;
    }
        if(c>m)
        {
            if(m <=(c-m+x))
                {printf("%d\n",m);
                continue;
                }
            else
            {
               sum=0;
               sum+=x;
               c-= x;
               m-=x;
               sum +=min(c,m);
               printf("%d\n",sum);
               continue;
            }
        }
        if(m>c)
        {
            if(c<=(m-c+x))
                {printf("%d\n",c);
                continue;
                }
             else
            {
               sum=0;
               sum+=x;
               c-= x;
               m-=x;
               sum += min(c,m);
               printf("%d\n",sum);
               continue;
            }

        }

    }
}
