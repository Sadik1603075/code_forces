#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[105];

int main()
{
    ll t,n,i,j;
    cin>>t;

    while(t--)
    {
      cin>>n;

      for(i=1;i<=n;i++)
      {
          scanf("%lld",&arr[i]);
      }
      ll mx=INT_MAX;

      for(i=1;i<=n;i++)
      {
          for(j=1;j<=n;j++)
          {
              if(j==i)
                continue;

                ll x = abs(arr[i]-arr[j]);
                mx = min(x,mx);
          }
      }
      cout<<mx<<endl;
    }
}

