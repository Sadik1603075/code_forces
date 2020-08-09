#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[2006];
ll dead[2005];

int main()
{
    ll i,n,j,k;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
        if(arr[i]==1)
            dead[1]++;
    }
    if(dead[1]>0)
    {
        cout<<n-dead[1]<<endl;
        return 0;
    }
    ll x,x1=3000,mx=INT_MAX,ok=0;
    for(i=1;i<n;i++)
    {
        x = arr[i];
        x1=0;
        for(j=i+1;j<=n;j++)
        {
            x = __gcd(arr[j],x);
            if(x==1)
                {
                    x1=1;
                    ok=1;
                    break;
                }
        }
        if(x1)
        {

            mx = min(mx,j-i);
        }
    }
    if(ok)
    {
        cout<<mx+n-1<<endl;
    }
    else
        cout<<-1<<endl;


}

