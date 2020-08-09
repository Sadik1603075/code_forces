#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int dis,cos,no;
};

bool cmp(Node A,Node B)
{
    if(A.cos==B.cos)
        return A.dis<B.dis;
    return A.cos<B.cos;
}
vector<Node>v;

int dish[100005];
int cost[100005];
int order[100005][4];

int main()
{
    int i,j,n,m,l,k;
    long long sum=0,s=0;

    cin>>n>>m;
    Node e;

    for(i=1; i<=n; i++)
    {
        scanf("%d",&dish[i]);
    }

    for(i=1; i<=n; i++)
    {
        scanf("%d",&cost[i]);
    }

    for(i=1; i<=m; i++)
    {
        scanf("%d%d",&order[i][0],&order[i][1]);
    }


    for(i=1; i<=n; i++)
    {
        e.no=i;
        e.dis=dish[i];
        e.cos=cost[i];
        v.push_back(e);
    }


    sort(v.begin(),v.end(),cmp);

    for(i=0;i<n;i++)
    {
        cout<<v[i].no<<"  "<<v[i].dis<<"  "<<v[i].cos<<endl;
    }



    for(i=1; i<=m; i++)
    {
        sum=0;

        for(j=0; j<v.size(); j++)
        {
            if(v[j].no==order[i][0])
            {
                k = v[j].dis-order[i][1];
                if(k>=0)
                {
                    sum+=v[j].cos*order[i][1];
                    v[j].dis-=order[i][1];
                    order[i][1]=0;
                    break;
                }
                else
                {
                    sum+=v[j].cos*v[j].dis;
                    v[j].dis=0;
                    order[i][1]-=v[j].dis;
                    s=0;


                    for(k=0; k<n; k++)
                    {
                        if(v[k].dis>0)
                        {
                            if(order[i][1]==0)
                                break;

                            int kk = v[k].dis-order[i][1];

                            if(kk>=0)
                            {
                                s+=v[k].cos*order[i][1];
                                v[k].dis-=order[i][1];
                                order[i][1]=0;
                                if(order[i][1]==0)
                                   break;
                            }
                            else
                            {
                                s+=v[k].cos*v[k].dis;
                                v[k].dis=0;
                                order[i][1]-=v[k].dis;

                            }

                        }
                        if(order[i][1]==0)
                            break;

                    }
                    if(order[i][1]==0)
                        sum+=s;
                    break;
                }
            }
        }
        cout<<sum<<endl;
        sum=0;
    }


}
