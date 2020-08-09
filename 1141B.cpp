#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[400005];


int main()
{
    ll n,t,i,m,j;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&m);
        arr[i] = m;
    }
    for(i=n+1,j=1;i<=2*n;i++,j++)
    {
        arr[i] = arr[j];
    }
    ll ansl,ansr,l,r,c=0,mx=0,sum=0;

    for(i=1;i<=2*n;i++)
    {
       if(arr[i]==1)
       {
           sum++;
       }
       else
       {
           mx= max(mx,sum);
           sum=0;
       }
    }
    mx= max(mx,sum);
    if(mx==2*n)
        mx/=2;
    cout<<mx<<endl;

}

