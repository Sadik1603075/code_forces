#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100005];
bool visited[100005];
vector<int>ans;
priority_queue<int,vector<int>,greater<int>>q;

void DFS(int u)
{

    for(int i=0;i<adj[u].size();i++)
    {
        int v =adj[u][i];

        if(!visited[v])
        {
            visited[v]=1;
            ans.push_back(v);
            q.push(v);
            DFS(v);
        }
    }
}

void BFS()
{
    int i,j,u,v;

    q.push(1);
    visited[1]=1;
    //ans.push_back(1);

    while(!q.empty())
    {
        u = q.top();
        ans.push_back(u);
        q.pop();

        for(j=0;j<adj[u].size();j++)
        {
            v= adj[u][j];
            if(!visited[v])
            {
                visited[v]=true;
                q.push(v);
                //ans.push_back(v);
                //DFS(v);
            }
        }
    }

}

int main()
{
    int i,j,k,l,n,m,u,v;
    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        scanf("%d%d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    BFS();

    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}
