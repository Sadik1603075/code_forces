#include<bits/stdc++.h>
using namespace std;

#define ll long long
unordered_map<ll,ll>mp;

ll l =0,r=-1;
long long sum=0,ans[100005],cnt[1000006],a[100005],com[100005];
struct query
{
    long long l,r,id;
}q[100005];
 ll k =500;

bool cmp(query &a,query &b)
{
    ll block_a = a.l/k,block_b = b.l/k;
    if(block_a==block_b)
        return a.r < b.r;
    return block_a<block_b;
}
//void add(int x){sum +=a[x];}
//void remov(int x){sum -=a[x];}

/*void add(int x)
{
    x = a[x];
    cnt[x]++;
    if(cnt[x]==1)
        ans++;
}
void remov(int x)
{
    x = a[x];
    cnt[x]--;
    if(cnt[x]==0)
        ans--;
}*/


void add(ll x)
{
    if(cnt[mp[a[x]]]==a[x])
        sum--;
    cnt[mp[a[x]]]++;
    if(cnt[mp[a[x]]]==a[x])
        sum++;
}
void remov(ll x)
{
     if(cnt[mp[a[x]]]==a[x])
        sum--;
    cnt[mp[a[x]]]--;
    if(cnt[mp[a[x]]]==a[x])
        sum++;

}

int main()
{
    ll n,j,Q,c=0,c1=0,x;
    cin>>n>>Q;
    //k = n/sqrt(Q);
    for(j=0;j<n;j++)
    {
        scanf("%lld",&a[j]);
    }
    for(int i=0;i<Q;i++)
    {
        scanf("%lld%lld",&q[i].l,&q[i].r);
        q[i].l--;
        q[i].r--;
        q[i].id = i;
    }
     for(int i=0;i<n;i++)
    {
        x = a[i];
        if(mp[x]==0)
        {
            mp[x]=c1;
            c1++;
        }
        x = mp[x];
        com[c++]=x;
    }
    sort(q,q+Q,cmp);

    for(int i=0;i<Q;i++)
    {
        while(l>q[i].l)add(--l);
        while(r<q[i].r)add(++r);
        while(l<q[i].l)remov(l++);
        while(r>q[i].r)remov(r--);
        ans[q[i].id]=sum;
    }
    for(j=0;j<Q;j++)
    {
        printf("%lld\n",ans[j]);
    }
}
