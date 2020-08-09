#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>prime;
bool primes[1005];
ll arr[1005];
ll ans[1005];

void get_prime()
{
    for(ll i=2;i<=1000;i++)
    {
        if(primes[i]>0)
            continue;

        for(ll j=i*i ; j<=1000;j+=i)
        {
            primes[j] =1;
        }
        if(primes[i]==0)
            prime.push_back(i);
    }
}


int main()
{
    ll t,i,n,j,m,gcd,x;
    cin>>t;
    get_prime();
    m = prime.size();
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            {
                scanf("%lld",&arr[i]);
                ans[i]=0;
            }

        x=0;
        for(i=0;i<=m;i++)
        {
            gcd =0;
           for(j=1;j<=n;j++)
           {
               if(ans[j]!=0)
                continue;
               if(arr[j]%prime[i]!=0)
                continue;
                if(gcd==0)
                {
                    gcd =1;
                    x++;
                }
                ans[j]=x;
           }
        }
        printf("%lld\n",x);
        for(i=1;i<=n;i++)
        {
            printf("%lld ",ans[i]);
        }
        printf("\n");

    }
    return 0;
}
