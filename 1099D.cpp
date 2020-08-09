#include<bits/stdc++.h>
using namespace std;
int Sv[100005];
int connect[100005];
int arr[100005];
vector<int>v[100005];
bool visited[100005];
int minn = INT_MAX;
int DFS(int u)
{
    if(v[u].size()==0)
        return Sv[u];

    for(int i=0;i<v[u].size();i++)
    {
        minn =min(minn,DFS(v[u][i]));
        arr[v[u][i] ]= minn;
        minn =INT_MAX;

    }

}
void BFS()
{
    int u,x,i,j,m=0;
    queue<int>Q;
    Q.push(1);
    visited[1]=true;
    connect[1]=Sv[1];

    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();
        for(i=0;i<v[u].size();i++)
        {
            m=1;
            x = v[u][i];
            if(Sv[x]==-1)
            {
                if(v[x].size()==1||v[x].size()==0)
                {
                    connect[x]=0;
                }
                else
                {
                    int minn=INT_MAX;

                    for(j=0;j<v[x].size();j++)
                    {
                         minn = min(minn,Sv[v[x][j]]);
                    }
                    connect[x]=minn;
                }
            }
            else
            {
                connect[x]=Sv[x];
            }
            Q.push(x);
        }

    }
}
int main()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        scanf("%d",&l);
        v[l].push_back(i);
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&Sv[i]);
    }

}
