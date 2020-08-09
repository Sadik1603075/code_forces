#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[300003];

int main()
{
    ll t,i,n,k;
    cin>>t;

    while(t--)
    {
        cin>>n;
        ll ok=0;
        ll pos1=0;
        ll posn =0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
            if(arr[i]==1)
                pos1=i;
            if(arr[i]==n)
                posn=i;
        }
        if(posn==1)
        {
            printf("NO\n");
            continue;
        }
        if(pos1==n)
        {
            printf("NO\n");
            continue;
        }
        if(posn==n)
        {
            printf("YES\n");
            continue;
        }
        if(arr[1]>arr[n])
        {
            printf("NO\n");
            continue;
        }
        printf("YES\n");

    }
    return 0;
}
