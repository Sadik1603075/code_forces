#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005];
ll peak[200005];

int main()
{
    ll t,i,n,k,j;
    cin>>t;

    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        memset(peak,0,sizeof(peak));

        for(i=1; i<=n; i++)
        {
            scanf("%lld",&arr[i]);
        }

        for(i=2; i<n; i++)
        {
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
            {
                peak[i]=1;
            }
        }

        for(i=2;i<=n;i++)
        {
            peak[i] = peak[i]+peak[i-1];
        }

        ll m = 0,ans=1;
        for(i=k;i<=n;i++)
        {
            if( peak[i-1]-peak[i-k+1]>m)
            {
                m = peak[i-1]-peak[i-k+1];
                ans =i-k+1;
            }
        }

        cout<<m+1<<" "<<ans<<endl;
    }

    return 0;
}

