#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[200005];
ll total[200005];

int main()
{
    ll i,j,n,t,m,l;
    cin>>t;

    while(t--)
    {
        scanf("%lld",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&l);
            total[l]++;
        }

        if(n==1)
        {
            cout<<0<<endl;
            total[1]=0;
            continue;
        }
        m = 0;
        ll sum =0;

        for(i=1;i<=n;i++)
        {
          m = max(m,total[i]);
          if(total[i]>0)
          {
             sum++;
          }
        }


        if(m>sum)
        {
            if(2*sum<=n)
            cout<<sum<<endl;
            else
                cout<<sum-1<<endl;
        }
        else if(sum==m)
        {
            cout<<sum-1<<endl;
        }
        else
        {
            cout<<m<<endl;
        }

        for(i=0;i<=n+1;i++)
            total[i]=0;


    }
    return 0;
}

