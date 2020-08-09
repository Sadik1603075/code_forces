#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[200005];

int main()
{
    ll i,j,k,l,n,m;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    m=0;
    for(i=1;i<=n;i++)
    {
        arr[i] = arr[i]+m;
        m = max(m,arr[i]);
    }

    for(i=1;i<=n;i++)
    {
        printf("%lld ",arr[i]);
    }
    printf("\n");
    return 0;
}
