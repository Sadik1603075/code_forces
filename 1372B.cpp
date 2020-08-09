#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];

int main()
{
    ll t,i,n,j;
    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n%2==0)
        {
            printf("%lld %lld\n",n/2,n/2);
        }
        else
        {
            ll ok=0;
            for(i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    ok=1;
                    break;
                }
            }
                if(ok==0)
                    printf("1 %lld\n",n-1);
                else
                    printf("%lld %lld\n",n/i,n-(n/i));
        }

    }
    return 0;
}

