#include<bits/stdc++.h>
using namespace std;
int tree[4*150004];
int arr[150004];

void build ( int node, int l, int r)
{
    if(l==r)
    {
        tree[node] = arr[l];
        return;
    }
    int mid = (l+r)/2;
    build ( 2*node,l,mid);
    build ( 2*node+1,mid+1,r);
    tree[node] =  min(tree[2*node],tree[2*node+1]);

}

int query ( int node, int l,int r,int b, int e)
{
    if(l>e||b>r)
        return INT_MAX;

    if(l>=b && r<=e)
        return tree[node];

    int mid =(l+r)/2;

    int p1 = query (2*node,l,mid,b,e);

    int p2 = query (2*node+1,mid+1,r,b,e);

    return min(p1,p2);
}


int main()
{
    int i,j,k,l,n,r,ans,x=0,t;
    scanf("%d",&t);

    for(j=1; j<=t; j++)
    {
        x=0;

        scanf("%d",&n);

        for ( i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
        }
        build(1,1,n);

        k=2;
        for(i=2; i<=n; i++)
        {
            l =k;
            r = n;
            ans = query(1,1,n,l,r);
            //cout<<arr[i-1]<<" "<<ans<<endl;
            if(ans<arr[i-1])
                x++;

            k++;
        }

        printf("%d\n",x);
    }
}

