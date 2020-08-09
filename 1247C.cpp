#include<bits/stdc++.h>
using namespace std;

vector<int>v;

int arr[1000003];


int main()
{
    int i,j,k,l,m,n,t,d,x,dis,z;

    cin>>t;

    for(l=1;l<=t;l++)
    {
        scanf("%d%d%d",&n,&k,&d);
        x=INT_MAX;
        dis=0;

        for(i=1;i<=n;i++)
        {
            scanf("%d",&m);
            v.push_back(m);
        }
        dis=0;

        for(i=0;i<d;i++)
        {
            arr[v[i]]++;
            if(arr[v[i]]==1)
            {
                dis++;
            }
        }
        x = min(x,dis);


        for(i=d;i<n;i++)
        {
            arr[v[i]]++;

            if(arr[v[i]]==1)
            {
                dis++;
            }
           arr[v[i-d]]--;

           if(arr[v[i-d]]==0)
              dis--;

           x = min(x,dis);
        }

        v.clear();
        memset(arr,0,sizeof(arr));
        cout<<x<<endl;

    }

}
