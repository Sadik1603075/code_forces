#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1000006];
ll dead[1000006];

int main()
{
    ll i,n,j,k;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    ll sum=0;
    for(i=n-1;i>=1;i--)
    {
        if(arr[i+1]>0)
            sum++;
        arr[i] = max(arr[i],arr[i+1]-1);
    }
    cout<<n-sum<<endl;

}
