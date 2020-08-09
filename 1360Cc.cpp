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
      ll x,y,z;
      sort(arr+1,arr+1+n);

      ll ev=0,odd=0;
      ll ok=1;

      for(i=1;i<=n;i++)
      {
          x=0;
          if(arr[i]==-1)
            continue;

          for(j=i+1;j<=n;j++)
          {
              if(arr[j]==-1)
                continue;

              if(abs(arr[i]-arr[j])==1)
              {
                  x=1;
                  arr[i]=-1;
                  arr[j]=-1;
                  break;
              }
          }

          if(x==0)
          {
              for(j=1;j<=n;j++)
              {
                  if(j==i || arr[j]==-1)
                    continue;

                  if(arr[i]%2==arr[j]%2)
                  {
                    x=1;
                    arr[i]=-1;
                    arr[j]=-1;
                    break;
                  }
              }
          }
          if(x==0)
          {
              ok&=0;
          }
      }
      if(ok)
      {
          printf("YES\n");
      }
      else
      {
          printf("NO\n");
      }



    }
}


