#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>parent,depth,tin,tout;
vector< vector<ll> >adj;
ll T ;

void dfs ( ll v, ll p =0 ,ll d=0)
{
    parent[v] = p;
    depth[v] = d;
    tin[v] = T++;

    for(int i =0 ;i<adj[v].size() ; i++)
    {
        ll u = adj[v][i];
        if(u==p)
            continue;
        dfs(u,v,d+1);
    }
    tout[v] = T++;
}
bool isAnc(ll v,ll u)
{
    return tin[v]<= tin[u] && tout[u]<=tout[v];
}
int main()
{
    ll n,m;
    cin>>n>>m;
    T=0;

    parent = depth = vector<ll>(n+1);
    tin= tout = vector<ll>(n+1);
    adj = vector<vector<ll> >(n+1);

    for(ll i=1;i<=n-1;i++)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);

    for(ll j=1;j<=m;j++)
    {
        ll k,val;
        cin>>k;
        vector<ll>v;

        for(int i=1;i<=k;i++)
        {
            cin>>val;
            v.push_back(val);
        }

    ll u = v[0];
    for(int i =0;i<v.size();i++)
    {
        if(depth[u]<depth[v[i]])
            u = v[i];
    }

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==u)
            continue;
        if(parent[v[i]]!=0)
            v[i] = parent[v[i]];
    }


    bool ok = true;

    for(int i=0;i<v.size();i++)
    {
        ok &=isAnc(v[i],u);

    }
    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;

}
