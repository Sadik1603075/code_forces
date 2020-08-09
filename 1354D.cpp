#include<bits/stdc++.h>
using namespace std;
#define ll int

const ll maxsize=1e6+7;

ll segtree[4*maxsize],ans=0;//a quite similar segment tree problem is Diablo Light oj 1087

void add(ll node,ll lo,ll hi,ll x)
{
    if(lo>x || hi<x)
        return;

    if(lo==hi)
    {
        segtree[node]++;
        return;
    }
    ll mid = (lo+hi)/2;

    add(2*node,lo,mid,x);
    add(2*node+1,mid+1,hi,x);

    segtree[node] = segtree[2*node]+segtree[2*node+1];
}

void remov(ll node,ll lo,ll hi,ll x)
{

    if(lo==hi)
    {
        segtree[node]--;

        if(segtree[node]<0)
            ans=0;
        else
            ans=lo;
        return;
    }

    ll mid = (lo+hi)/2;

    if(segtree[2*node]>=x)
      remov(2*node,lo,mid,x);
    else
      remov(2*node+1,mid+1,hi,x-segtree[2*node]);

    segtree[node] = segtree[2*node]+segtree[2*node+1];
}

int main()
{
    ll n,q,i,j,val;
    cin>>n>>q;

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&val);
        add(1,1,n+q,val);
    }
    for(i=1;i<=q;i++)
    {
        scanf("%lld",&val);
        if(val>0)
        {
            add(1,1,n+q,val);
        }
        else
        {
            remov(1,1,n+q,abs(val));
        }
    }
    remov(1,1,n+q,1);
    cout<<ans<<endl;
    return 0;
}

