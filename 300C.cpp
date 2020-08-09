#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll a,b,n;
ll fact [1000006]={1};

ll bigmod(ll a,ll b,ll M)
{
    if(b==0)
        return 1%M;
    ll x = bigmod(a,b/2,M);
    x = (x*x)%M;
    if(b%2==1)
        x = (x*a)%M;
    return x;
}

bool Check(ll sum)
{
    bool ok = 1;
    while(sum !=0)
    {
        ll j = sum%10;
        sum /=10;
        if(j==a || j==b)
        {
            ok =1;
        }
        else
        {
            ok=0;
            return false;
        }
    }
    return ok;
}
int main()
{
    ll i,k,ans=0;

    cin>>a>>b>>n;

    for(i=1;i<=n;i++)
    {
        fact[i] =i*fact[i-1]%mod;
    }


    for(i=0;i<=n;i++)
    {
      ll sum = a*i + b*(n-i);
        if(Check(sum))
        {
             k = fact[i] * fact[n-i]%mod;
             ans =(ans+ (fact[n]*bigmod(k,mod-2,mod)%mod)%mod)%mod;
        }
    }

    cout<<ans<<endl;
    return 0;
}
