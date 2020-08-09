#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll b[505];

struct node
{
    ll val,pos;
};

node a[505];

bool cmp (node a,node b)
{
    if(a.val==b.val)
        return a.pos<b.pos;

    return a.val < b.val;
}
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a[i].val);
            a[i].pos=i;
        }

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&b[i]);
        }
        sort(a+1,a+1+n,cmp);

        for(i=1;i<=n;i++)
        {
            cout<<a[i].val<<" "<<a[i].pos<<endl;
        }


    }
    return 0;
}

