#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1004];

int main()
{
    ll t,i,n,a,b,c,d,baki,dorkar,ans;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>d;
        baki = a-b;

        if(baki<=0)
        {
            printf("%lld\n",b);
            continue;
        }
        if(d>=c)
        {
            printf("-1\n");
            continue;
        }
        dorkar = c-d;

        if(baki%dorkar==0)
        {
            ans = b + c*(baki/dorkar);
        }
        else
        {
             ans = b + c*((baki/dorkar)+1);
        }

        printf("%lld\n",ans);

    }
    return 0;
}

