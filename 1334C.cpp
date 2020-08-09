#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[300005];
ll b[300005];
ll af[300005];
ll bf[300005];


int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=1;i<=n;i++)
        {
            scanf("%lld%lld",&a[i],&b[i]);
        }

        af[1]=a[1];

        for(i=2;i<=n;i++)
        {
            af[i]= a[i] - b[i-1];

              if(af[i]<=0)
                 af[i]=0;
        }

        ll sum = a[n];

        bf[1] = a[1]-b[n];
        if(bf[1]<=0)
            bf[1]=0;


        for(i=2;i<=n-1;i++)
        {
            bf[i]= a[i] - b[i-1];
              if(bf[i]<=0)
                 bf[i]=0;
        }
        bf[n] = a[n];

        for(i=2;i<=n;i++)
        {
            af[i] = af[i]+af[i-1];
            bf[i] = bf[i] + bf[i-1];
        }
        ll m=LONG_LONG_MAX;
        af[0]=0;
        bf[0]=0;
        for(i=1;i<=n;i++)
        {
            sum = a[i];
            sum += af[n]-af[i];
            sum += bf[i-1];
            m = min(m,sum);
        }
        cout<<m<<endl;

    }
    return 0;
}

