#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1005][1005];
ll dp[1005][1005],n;



ll check(ll p , ll q)
{
    ll c15=0,c25=0,c12=0,c22=0,ansp=0,ansq=0;
    ll x1=p,x2=q;

    while(x1%2==0)
    {
        c12++;
        x1/=2;
    }
    while(x1%5==0)
    {
        c15++;
        x1/=5;
    }

    if(c12==0 || c15==0)
    {
        ansp=max(c12,c15);
    }
    else
    {
        ansp=min(c12,c15);
    }


    while(x2%2==0)
    {
        c22++;
        x2/=2;
    }
    while(x2%5==0)
    {
        c25++;
        x2/=5;
    }

    if(c25==0 || c22==0)
    {
        ansq=max(c25,c22);
    }
    else
    {
        ansq=min(c22,c25);
    }
    cout<<ansp<<" "<<ansq<<endl;
    if(ansp>ansq)
    {
        return q;
    }
    else
    {
        return p;
    }
}


ll dfs(ll i ,ll j)
{
    if(dp[i][j]!= -1)
    {
        return dp[i][j];
    }

    if(i==n && j==n)
    {
        dp[n][n]=arr[i][j];
      return arr[i][j];
    }

    if(i>n || j>n)
        return 1000;

    ll p = arr[i][j]*dfs(i+1,j);
    ll q = arr[i][j]*dfs(i,j+1);


    dp[i][j] = check(p,q);
    return dp[i][j];
}

int main()
{
    ll i,j,k;
    cin>>n;
    memset(dp,-1,sizeof(dp));

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%lld",&arr[i][j]);
        }
    }

    ll ans = dfs(1,1);
    string s;
    i=1,j=1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%lld ",dp[i][j]);
        }
        printf("\n");
    }


    while(1)
    {
        if(arr[i][j]*dp[i+1][j]==dp[i][j])
        {
            s+="D";
            i++;
        }
        else
        {
            s+="R";
            j++;
        }
        if(i==n&&j==n)
            break;

    }



    ll x1=ans,c15=0,c12=0,ansp;


    while(x1%2==0)
    {
        c12++;
        x1/=2;
    }
      while(x1%5==0)
    {
        c15++;
        x1/=5;
    }
    if(c12==0 || c15==0)
    {
        ansp=0;
    }
    else
    {
        ansp=min(c12,c15);
    }

    cout<<ansp<<endl;
    cout<<s<<endl;

}
