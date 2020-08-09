#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll hour[2004];
ll n,h,l,r;
ll dp[2004][2004];

int solve(ll pos,ll hh)
{


    if( dp[pos][hh]!=-1)
    {
        return  dp[pos][hh];
    }

    if(pos>1 && l<=hh && hh<=r)
    {
         dp[pos][hh] =1;
    }
    else
         dp[pos][hh] =0;



    if(pos > n)
        return  dp[pos][hh];


    dp[pos][hh] += max(solve(pos+1,(hour[pos]+hh)%h), solve(pos+1,(hour[pos]-1 + hh)%h));


    return  dp[pos][hh];
}

int main()
{
    ll i,j,k,m;
    cin>>n>>h>>l>>r;

    for(i=1; i<=n; i++)
    {
        scanf("%lld",&hour[i]);
    }
    memset(dp,-1,sizeof(dp));

    k = solve(1,0);
        printf("%lld\n",k);
    return 0;


}
