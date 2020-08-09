#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1005];

int main()
{
    ll m,n,sum=0,i;
    cin>>n>>m;

    for(i=1;i<=n;i++) scanf("%lld",&arr[i]);
    sort(arr+1,arr+n+1);
    for(i=1;i<=m;i++) if(arr[i]<0)sum+= abs(arr[i]);
    cout<<sum<<endl;
    return 0;
}

