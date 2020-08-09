#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll const maxl = 1000006;
string s;
ll t[4*maxl],o[4*maxl],c[4*maxl],n;

struct data
{
    ll t,o,c;
};

void build( ll node=1 , ll left=0 , ll right=n)
{
    if(left==right)
    {
        if(s[left]=='(')
        {
           o[node]=1;
        }
        else
        {
            c[node]=1;
        }
        return;
    }
    ll mid = (left+right)/2;
    build(2*node,left,mid);
    build(2*node+1,mid+1,right);

    ll tmp = min(o[2*node],c[2*node+1]);
    t[node] = t[2*node] + t[2*node+1] + tmp*2;
    o[node] = o[2*node] + o[2*node+1] - tmp;
    c[node] = c[2*node]+ c[2*node+1] - tmp;

    //cout<<" opening : "<<o[node]<<"  closing: "<<c[node]<<"  range :"<<left<<" "<<right<<" ans: "<<t[node]<<endl;
}

data query( ll node, ll left  , ll right , ll x , ll y)
{
    if(right< x || left > y)
    {
        data d;
        d.t=0;
        d.o =0;
        d.c =0;
        return d;
    }

    if(left>= x && right<=y)
    {
        data d;
        d.t = t[node];
        d.o = o[node];
        d.c = c[node];
        return d;
    }
    ll mid = (left+right)/2;
    data p,q,r;

    p = query(2*node,left,mid,x,y);
    q = query(2*node+1,mid+1,right,x,y);

    r.t = p.t + q.t;
    ll tmp = min(p.o,q.c);
    r.t += tmp*2;
    r.o = p.o+ q.o - tmp;
    r.c = p.c + q.c - tmp;
    return r;
}

int main()
{
    ll i,j,m,u,v;
    cin>>s;
    n = s.size()-1;
    build();
    data  ans;

    cin>>m;

    for(i=1;i<=m;i++)
    {
        scanf("%lld%lld",&u,&v);
        ans = query(1,0,n,u-1,v-1);

        printf("%lld\n",ans.t);

    }
    return 0;

}

