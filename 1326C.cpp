#include<bits/stdc++.h>
#define ll long long

using namespace std;

struct Node
{
    ll val,pos;

};
Node arr[200005],arr1[200005];

bool cmp(Node A,Node B)
{
    return A.val<B.val;
}

bool cmp1(Node A,Node B)
{
    return A.pos<B.pos;
}

int main()
{
    ll i,j,k,l,n,m;
    cin>>n>>k;


    for(i=1;i<=n;i++)
    {
        scanf("%lld",&l);
        arr[i].val = l;
        arr[i].pos = i;
    }

    sort(arr+1,arr+n+1,cmp);


    l = n;
    ll sum=0,position =0,s=1;

    for(i=1;i<=k;i++)
    {
       sum += arr[l].val;
       arr1[i].val = arr[l].val;
       arr1[i].pos = arr[l].pos;
       l--;
    }

    sort(arr1+1,arr1+1+k,cmp1);


    arr1[0].val =0;

    for(i=2;i<=k;i++)
    {
        s *= (arr1[i].pos - arr1[i-1].pos);

        s%=998244353;
    }




    cout<<sum<<" "<<s<<endl;

    return 0;
}

