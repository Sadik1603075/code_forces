#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];

int main()
{
    ll i,n,t;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&n);
        ll x = n/2;

        if(x%2==1)
        {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
        ll sum=0,j=2,sum1=0;
        for(i=1,j=2;i<=x;i++,j+=2)
        {
            printf("%lld ",j);
            sum +=j;
        }
        for(i=x+1,j=1;i<n;i++,j+=2)
        {
            printf("%lld ",j);
            sum1+=j;
        }
        printf("%lld\n",sum-sum1);

    }
    return 0;
}

