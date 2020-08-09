#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100005];
ll uniqu[100005];

ll qu[100005];
ll occ[100005];


int main()
{
    ll t,i,j,n,mn=0,mx=0,x;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
        occ[i] = INT_MAX;

        if(qu[arr[i]]==0)
        {
            mn++;
        }

        qu[arr[i]]++;
        uniqu[i]=mn;
        occ[i] = min()
    }

    if(mn==1||mn==n)
    {
        printf("%lld\n",n);
        return 0;
    }

    for(i=1;i<=n;i+=2)
    {
        x = uniqu[i]-1;
        j = i-1;

        if(x>0) if(j%x==0) mx=max(mx,i);
        if(j%uniqu[i]==0) mx = max(mx,i);
    }

    for(i=2;i<=n;i+=2)
    {
        if(uniqu[i]==i-1) mx = max(mx,i);
    }

    for(i=1;i<=n;i++) printf("%lld ",uniqu[i]);

    printf("\n%lld\n",mx);

    return 0;
}
