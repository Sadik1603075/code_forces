#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005];
ll ans[200005];
bool check[200005];

int main()
{
    ll n,t=0,i,m,j,ok=1,mn=0;
    cin>>n;

    for(i=1;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        t +=arr[i];
        mn = min(mn,t);
    }

    ans[1]=1-mn;
    check[ans[1]]=1;

    for(i=2;i<=n;i++)
    {
        ans[i] = ans[i-1]+arr[i-1];
        check[ans[i]]=1;
    }

    for(i=1;i<=n;i++)
        ok &=check[i];

    if(ok)
    {
        for(i=1;i<=n;i++)
        {
            printf("%lld ",ans[i]);
        }
        cout<<endl;
    }
    else
    {
        printf("-1\n");
    }


}


