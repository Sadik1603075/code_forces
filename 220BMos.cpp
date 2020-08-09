#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll l=0,r=-1,sum=0,cnt[1000006],a[1000006],arr[1000006];

void add(ll x)
{
    x = a[x];
    cnt[x]++;
    if(cnt[x]==1)
        sum++;
}
void remov(ll x)
{
    x = a[x];
    cnt[x]--;
    if(cnt[x]==0)
    sum--;
}

int main()
{
    ll n,i,j,k,ans=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(r<n-1)
    {
        add(++r);
    }
    arr[a[0]]=1;
    ans = sum-1;
    if(cnt[a[0]]>1)
            ans++;
    //cout<<ans<<endl;
    for(i=1;i<n-1;i++)
    {
        while(l<i)
            remov(l++);
        if(arr[a[i]]==0)
        {
         ans +=sum-1;
         arr[a[i]]=1;
          if(cnt[a[i]]>1)
            ans++;
         //printf("%lld %lld \n",a[i],ans);
        }

    }
    printf("%I64d\n",ans);
    return 0;
}
