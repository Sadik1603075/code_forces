
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    int n,i,j,sum1,sum2,p1,p2,c1=0,c2=0,c3=0,c4=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&p1,&p2);

        if(p1>0&&p2>=0)
        {
            c1++;
        }
        else if(p1>0&&p2<0)
           {
               c4++;
           }
        else if(p1<0&&p2>=0)
        {
            c2++;
        }
        else if(p1<0&&p2<0)
        {
            c3++;
        }
    }
    sum1 = c1+c4;
    sum2 = c2+c3;
    j = n-1;
    if(sum1==j||sum2==j||sum1==n||sum2==n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
