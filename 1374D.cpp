#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>mp;

int main()
{
    ll t,i,n,k,val,m,add,ans=0;
    cin>>t;

    while(t--)
    {
        m = 0;
        ans=0;
        scanf("%lld%lld",&n,&k);

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&val);

            if(val%k==0) continue;

            add = k-(val % k);
            mp[add]++;

            if(mp[add]>ans)
            {
                ans = mp[add];
                m = add;
            }
            else if(mp[add]==ans)
            {
                m = max(m,add);
            }
        }
        if(ans)
            ans = k*(ans-1)+ m + 1;
        else
            ans=0;

        printf("%lld\n",ans);
        mp.clear();
    }
}
