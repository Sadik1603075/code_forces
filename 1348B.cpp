#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];
vector<ll>ans;
set<ll>dist;

ll sum[1005];

int main()
{
    ll n,i,t,k,m,j;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        dist.clear();

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
            dist.insert(arr[i]);
        }

       if(dist.size()>k)
       {
           printf("-1\n");
           continue;
       }
       else if(n==k)
       {
           cout<<n<<endl;
           for(i=1;i<=n;i++)
           {
               cout<<arr[i]<<" ";
           }
           cout<<endl;
           continue;
       }

       set<ll>:: iterator it;


       cout<<n*k<<endl;
       for(i=1;i<=n;i++)
       {
           for(it=dist.begin();it!=dist.end();++it)
           {
               cout<<*it<<" ";
               m = *it;
           }
           if(k>dist.size())
           {
               ll x= k-dist.size();

               for(j=1;j<=x;j++)
               {
                   cout<<m<<" ";
               }
           }
       }
       cout<<endl;


    }
    return 0;
}

