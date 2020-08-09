#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[1025][25];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<=2*m;i++)
        dp[i][i] = 1;
    for(int i=1;i<=n+2*m-1;i++)
        dp[i][0]=1;
    for(int i=1;i<=n+2*m-1;i++)
        dp[i][1]=i;
    for(int i=2;i<=n+2*m-1;i++)
    {
        for(int j=1;j<=2*m;j++)
        {
            if(j<=i)
            {
                dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%1000000007;
            }
            else break;
        }

    }
    cout<<dp[n+2*m-1][2*m];
}
