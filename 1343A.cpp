#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];

int main()
{
    ll i,n,t;
    cin>>t;
    arr[1]=1;
    ll mul =1;
    for(i=2;i<=63;i++)
    {
         mul *=2;
         arr[i] = mul;
         arr[i] += arr[i-1];
    }
    while(t--)
    {
        scanf("%lld",&n);

        for(i=2;i<=63;i++)
        {
            if(n%arr[i]==0)
            {
                printf("%lld\n",(n/arr[i]));
                break;
            }
        }

    }
    return 0;
}
