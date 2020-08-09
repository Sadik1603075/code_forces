#include<bits/stdc++.h>
#include<cstdlib>
#include<vector>
#include<queue>
using namespace std;


vector<int>graph[10005];
bool visited[10005];
vector<int>node;
int pre[10005];
void BFS()
{
    int j,k,l,u,v,o;

    memset(visited,0,sizeof(visited));
        queue<int>Q;

        Q.push(node[0]);
        pre[node[0]] = node[0];
        visited[node[0] ]= 1;

        while(!Q.empty())
        {

        u = Q.front();
        Q.pop();

            for( k =0 ; k<graph[u].size() ;k++)
            {

                    v = graph[u][k];
                    if(!visited[v]){
                    Q.push(v);
                    visited[v] =1;

                   if(pre[v]==0)
                   pre[v] = v;}


                }


            }

}
int main()
{
    int i,j,n,u,v,ed,c;
    scanf("%d%d",&n,&ed);
    c = n-1;
    for(i=0;i<ed;i++)
    {
        scanf("%d%d",&u,&v);
        graph[u].push_back(v);
        graph[v].push_back(u);
        node.push_back(u);
        node.push_back(v);
    }

    BFS();
    for(i=0;i<node.size();i++)
    {
        if(pre[node[i]]==node[i])
            j =0;
        else
        {
            j=1;
            break;
        }
    }
    if(j==0&& ed ==c)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

