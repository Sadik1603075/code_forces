#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll counti[200005];

int main()
{
    ll t,n,i,l;
    cin>>t;
    while(t--)
    {

        scanf("%lld",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&l);
            counti[l]++;
        }

        ll sum=0;
        for(i=1;i<=n;i++)
        {
            ll x= counti[i]/i;
            sum +=x;
            counti[i] -= x*i;
        }
        counti[1]=0;

        ll x=0;
        for(i=2;i<=n;i++)
        {
            x += counti[i];
            if(x>=i)
            {
                sum++;
               if(x>i)
               {
                   x = x-i;
               }
               else
                x=0;
            }
            counti[i]=0;
        }
        cout<<sum<<endl;

    }
    return 0;
}
