#include<bits/stdc++.h>
using namespace std;
#define ll long long


map<ll,ll>mp;
vector<ll>v;


int main()
{
    ll i,l,n;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        scanf("%lld",&l);
        mp[i-l] +=l;
        v.push_back(i-l);
    }

    ll mx=0;
    map<ll,ll>::iterator it;

   for(i=0;i<v.size();i++)
   {
       mx = max(mp[v[i]],mx);
   }
   cout<<mx<<endl;
    return 0;

}

