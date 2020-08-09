#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005];

int main()
{
    ll t,n,x,i,sum=0,l,r;
    cin>>t;
    while(t--)
    {
        scanf("%lld%lld",&n,&x);
        sum=0;
        l = -1;

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
            sum+=arr[i];
            if(arr[i]%x)
            {
                if(l==-1)l=i;
                r = i;
            }
        }
         if(sum%x) printf("%lld\n",n);
         else if(l==-1) printf("-1\n");
         else printf("%lld\n",n-min(l,n-r+1));
    }
    return 0;
}
