#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> PII;
vector<PII>v[204];
int arr[204];
vector<int>ans;


bool cmp(PII A, PII B)
{
   return arr[A.first]>arr[B.first];
}

int main()
{
    int i,j,k,l,m,n,t,u,vv;
    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&u,&vv);

        arr[u]++;
        arr[vv]++;
        v[u].push_back(make_pair(vv,i));
        v[vv].push_back(make_pair(u,i));
    }



    for(i=1;i<=200;i++)
    {
        if(arr[i]>k)
        {
            sort(v[i].begin(),v[i].end(),cmp);

            for(j=0;j<v[i].size();j++)
            {
                l = v[i][j].first;

                if(arr[l]>k&&arr[i]>k)
                {
                    arr[l]--;
                    arr[i]--;
                    ans.push_back(v[i][j].second);
                }
            }
        }
    }
    cout<<ans.size()<<endl;

    sort(ans.begin(),ans.end());

    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
