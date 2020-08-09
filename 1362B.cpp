#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1050];
vector<ll>v;
int main()
{
    ll i,n,t,a,b,j,ok;
    cin>>t;
    while(t--)
    {
      cin>>n;
      ok=0;

      for(i=0;i<n;i++)
      {
          scanf("%lld",&arr[i]);
      }
      sort(arr,arr+n);

      for(i=1;i<=1024;i++)
      {
          v.clear();
          for(j=0;j<n;j++)
          {
              ll x = arr[j]^i;
              v.push_back(x);
          }
          sort(v.begin(),v.end());
           ok=0;

          for(j=0;j<n;j++)
          {
              if(arr[j]==v[j])
              {
                  ok++;
              }
              else
              {
                  ok=-1;
                  break;
              }
          }
          if(ok==n)
            break;
      }
      if(ok!=n)
      {
          printf("-1\n");
      }
      else
      cout<<i<<endl;


    }
}

