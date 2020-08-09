#include<bits/stdc++.h>
using namespace std;
struct inm{
int sum=0,xx;
}in[1005];
bool cmp(inm x,inm y)
{
    if(x.sum==y.sum)
        return x.xx<y.xx;
    else
    return x.sum>y.sum;

}
int main()
{
    int n,i,j,k,a,b,c,d,sum1=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        sum1=a+b+c+d;
        in[i].sum=sum1;
        in[i].xx=i;

    }
     sort(in+1,in+n+1,cmp);
     for(i=1;i<=n;i++)
     {
         if(in[i].xx==1)
         {printf("%d\n",i);
         break;
         }
     }
     return 0;

}
