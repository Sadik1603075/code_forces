#include<bits/stdc++.h>
using namespace std;

int arr[105];
bool visited[205];
deque<int>dq;

int main()
{
    int i,n,x,j,t;
    cin>>t;
    while(t--)
    {
       cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(!visited[arr[i]])
        {
            visited[arr[i]]=1;
            dq.push_back(arr[i]);
        }
    }

    for(i=1;i<=201;i++)
    {
        if(visited[i]==0)
        {
            dq.push_back(i);
            x--;
        }
        if(x==0)
            break;
    }

    sort(dq.begin(),dq.end());
     int v=1;
    for(i=0;i<dq.size();i++)
        {
            if(dq[i]==v)
            {
                v++;
            }
            else
                break;
        }

    cout<<v-1<<endl;

    memset(visited,0,sizeof(visited));
    dq.clear();
    }
    return 0;

}
