#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,i,x,j,val;

    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        ll odd=0,ev=0;

        for(i=1; i<=n; i++)
        {
            scanf("%lld",&val);

            if(val%2==0)
                ev++;
            else
                odd++;
        }

        if(n==x)
        {
            if(odd%2==1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            if(ev==0 && x%2==0 )
            {
                printf("NO\n");
                continue;
            }
            if(odd>0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
