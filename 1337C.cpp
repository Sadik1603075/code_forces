#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int>graph[200005];
int parent[200005];
int sizze[200005];
int ans[200005];

int DFS(int node, int m )
{
    sizze[node] = 1;
    parent[node] = parent[m]+1;

    for(int i=0; i<graph[node].size(); i++)
    {
        int v= graph[node][i];
        if(v==m)
            continue;

          sizze[node] +=DFS(v,node);
    }
    ans[node] = sizze[node]-parent[node];

    return sizze[node];
}

bool cmp(int A,int B)
{
    return A>B;
}

int main()
{
    int t,i,n,k,u,v;
    cin>>n>>k;

    for(i=1; i<=n-1; i++)
    {
        scanf("%d%d",&u,&v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    DFS(1,0);

    sort(ans+1,ans+n+1,cmp);

    ll sum=0;
    for(i=1;i<=n-k;i++) sum+=ans[i];

    cout<<sum<<endl;
    return 0;
}
