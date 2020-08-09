#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll ans[5];

int main()
{
    ll i,j,k,l,t,n,m,sum=0,x=0;;

    cin>>t;

    for(k=1;k<=t;k++)
    {
        scanf("%lld",&n);
        sum=0;
        x=0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&l);

            sum += l;
            x ^= l;
        }

        if(sum == 2*x && n>1)
        {
            printf("0\n");
            continue;
        }

        ans[0] = sum;

        x ^=sum;
        sum += sum;

        sum += x;
        ans[1] =x;
        x ^= x;
        ans[2] = sum;
        x ^= sum;
        sum += sum;

        printf("3\n");
        for(i=0;i<3;i++)
        {
            printf("%lld ",ans[i]);
        }
        printf("\n");


    }


}
