#include<bits/stdc++.h>
using namespace std;
#define ll long long
 ll arr[200005];
 ll csum1[200005];
set<ll>csum2;


int main()
{
    ll i,j,k=0,l,n,ans;
    cin>>n;
    ll sum1=0;
    for(i=1;i<=n;i++)
    {
        scanf("%I64d",&arr[i]);
    }

    for(i=n;i>=1;i--)
    {
        sum1+=arr[i];
        csum2.insert(sum1);
    }
    k=0;
    ans=0;
    for(i=1;i<=n;i++)
    {
        k+=arr[i];
        if(csum2.find(k)!=csum2.end()&&sum1>=2*k)
        {
            ans= k;
        }
    }
    printf("%I64d\n",ans);


    return 0;

}
