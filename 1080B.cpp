#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,k,l,q,r,r1,l1,sum=0,r2,l2;

    cin>>q;
    for(k=1;k<=q;k++)
    {
        scanf("%I64d%I64d",&l,&r);
        sum=0;
        if(r%2==0)
        {
            r1=r/2;
            r2 =(r/2);

        }
        else
        {
            r1 =(r-1)/2;
            r2 = (r/2)+1;
        }

        sum+=(r1*(r1+1));

        long long an = 1+(r2-1)*2;

        long long s1 = (r2*(1+an))/2;
        sum -= s1;
        l--;
        if(l%2==0)
        {
           l1 = (l/2);
           l2 = (l/2);
        }
        else
        {
            l1 = (l-1)/2;
            l2 = (l/2)+1;
        }
        long long sum1 =0;
        sum1 += (l1*(l1+1));
        long long an1 = 1+(l2-1)*2;
        long long s2= (l2*(1+an1))/2;
        sum1 -= s2;
        printf("%I64d\n",sum-sum1);

    }
    return 0;
}
