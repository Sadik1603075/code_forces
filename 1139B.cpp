#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[200005];


int main()
{
    ll t,i,n,j,x,sum=0;
    cin>>n;

    for(i=1;i<=n;i++) scanf("%lld",&arr[i]);
    ll mx = LONG_LONG_MAX;

    for(i=n;i>=1;i--)
    {
       if(arr[i]<mx)
       {
           sum+=arr[i];
           mx = arr[i];
       }
       else
       {
           if(mx-1>0)
           {
               sum += mx-1;
               mx = mx-1;
           }
           else
            break;
       }
    }
    cout<<sum<<endl;

    return 0;
}

