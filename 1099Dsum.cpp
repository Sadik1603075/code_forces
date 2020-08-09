#include<bits/stdc++.h>
using namespace std;
int psv[100005];
int nsv[100005];
int av[100005];
vector<int>v[100005];
bool visited[100005];


int DFS(int node)
{
    if(v[node].size()==0)
    {
        if(psv[node]==-1)
        {
            nsv[node]=1000000009;
            av[node]=0;
            return 1000000009;
        }
        else
        {
            nsv[node] = psv[node];
            return psv[node];
        }
    }
    for(int i=0; i<v[node].size(); i++)
    {
        int vv = v[node][i];
        if(!visited[vv])
        {
            visited[vv]=1;
            if(psv[node]==-1)
            {
                nsv[node] = min(1000000009,DFS(vv));
                if(v[node].size()==1)
                    av[node]=0;
                else
                    av[node]= nsv[node];
            }
            else
            {
                nsv[node] =min(psv[node],DFS(vv));
            }
        }
    }
    return nsv[node];
}

int main()
{
    int i,j,k,l,n,m;
    cin>>n;

    for(i=2; i<=n; i++)
    {
        scanf("%d",&l);
        v[l].push_back(i);
    }
    for(i=1; i<=n; i++)
    {
        scanf("%d",&l);

        psv[i] = l;
    }
    av[1]=psv[1];
    visited[1]=1;
    DFS(1);



    for(i=1; i<=n; i++)
    {
        printf("%d ",nsv[i]);
    }
    cout<<endl<<endl;

}
