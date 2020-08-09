#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1003];
ll arrb[1003];


int main()
{
    ll t,i,n,j,m;
    cin>>t;

    while(t--)
    {
        scanf("%lld%lld",&n,&m);

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&j);
            arr[j]=1;
        }
        for(i=1;i<=m;i++)
        {
            scanf("%lld",&j);
            arrb[j]=1;
        }
        ll ok =0,ans;
        for(i=1;i<=1000;i++)
        {
            if(arr[i]== 1 && arrb[i]==1)
            {
                ok=1;
                ans =i;
                break;
            }
        }

        if(ok)
        {
            printf("YES\n");
            printf("1 %lld\n",ans);
        }
        else
        {
            printf("NO\n");
        }
        memset(arr,0,sizeof(arr));
        memset(arrb,0,sizeof(arrb));

    }
}

