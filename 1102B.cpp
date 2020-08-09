#include<bits/stdc++.h>
using namespace std;

int arr[5005],dist[5005],arr1[5005];

struct Edge
{
    int a,b;
};

bool operator <(Edge A,Edge B)
{
    return A.a<B.a;
}
vector<Edge>v;

int main()
{
    int i,j,k,l,n,ans=0;
    cin>>n>>k;
    Edge e;

    for(i=1; i<=n; i++)
    {
        scanf("%d",&l);
        e.a =l;
        e.b =i;
        v.push_back(e);

        arr[i] = l;
        dist[l]++;
    }
    for(i=1; i<=5000; i++)
    {
        if(dist[i]>k)
        {
            ans =1;
        }

    }
    if(ans==1)
    {
        printf("NO\n");
        return 0;
    }
    printf("YES\n");


    sort(v.begin(),v.end());

    j=1;
    for(i=0;i<v.size();i++)
    {
        if(j==k+1)
        {
            j=1;
        }
        v[i].a =j;

        arr1[v[i].b]=v[i].a;
        j++;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr1[i]);
    }

    return 0;
}

