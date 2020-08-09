#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<ll>ans;
int main()
{
    ll t,x,val;
    cin>>t;
    while(t--)
    {
        cin>>x;
        for(int i=1;i<=x;i++)
        {
            scanf("%lld",&val);
            ans.insert(val);
        }
        cout<<ans.size()<<endl;
        ans.clear();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 10^9+7
ll dp [1023][25];

int main()
{
    ll n,m,i,j;
    cin>>n>>m;

    for(i=0;i<=2*m;i++)
    {
        dp[i][i] = 1;
    }
    for(i=1 ; i<=n +2*m-1;i++)
    {
        dp[i][0] = 1;
    }
    for(i=1;i<n+2*m-1;i++)
        dp[i][1]=i;

    for(i=2;i<=n+2*m-1;i++)
    {
        for(j=1;j<=2*m;j++)
        {
            if(j<=i)
            {
                dp[i][j] = (dp[i-1][j]+dp[i-1][j-1])%MOD;
            }
            else
                break;
        }
    }
    cout<<dp[n+2*m-1][2*m]<<endl;



    return 0;
}


