#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005];
vector<ll>v;
map<ll,ll>mp;

int main()
{
    ll i,j,k,n,l,c=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        scanf("%I64d",&arr[i]);
        v.push_back(arr[i]);
        mp[arr[i]]++;
    }
    sort(v.begin(),v.end());
    l = mp[v[n-1]];

    for(i=n-2;i>=0;i--)
    {
        if(v[i]==v[i+1])
            continue;
        k = min(mp[v[i]],l);
        c+=k;
        l-=k;
        l+=mp[v[i]];
    }
    cout<<c<<endl;
}
