#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll arr[105];
vector<ll>adj[105];
vector<ll>v;
map<ll,ll>mp;

ll n;
void construct(ll x)
{
    if(v.size()==n)
        return;

    if(binary_search(arr,arr+n,x/3)&&mp[x/3]==0)
    {
        v.push_back(x/3);
        mp[x/3]++;
           if(v.size()==n)
            return;
        construct(x/3);
    }
    else if(binary_search(arr,arr+n,x*2)&&mp[x*2]==0)
    {
        v.push_back(x*2);
        mp[x*2]++;
        if(v.size()==n)
            return;
        construct(x*2);
    }
    else
    {
        return ;
    }
}
int main()
{
    int i,j;
    ll l,m,p,val;
    scanf("%I64d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%I64d",&arr[i]);
        mp[arr[i]]=0;
    }
    sort(arr,arr+n);

      for(i=0;i<n;i++)
      {
        val = arr[i];
        v.push_back(arr[i]);
        construct(val);
        if(v.size()==n)
            break;
        v.clear();
        mp.clear();
      }

        for(i=0;i<v.size();i++)
        {
            printf("%I64d ",v[i]);
        }

    return 0;
}
