#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1003];

int main()
{
    ll t,i,n,j,ok=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ok=0;

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
        }

        for(i=2;i<n;i++)
        {
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
            {
                ok=1;
                break;
            }
        }
        if(ok)
        {
             printf("YES\n");
             printf("%lld %lld %lld\n",i-1,i,i+1);
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}

