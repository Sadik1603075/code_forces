#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[200005];
map<ll,ll>cnt;

int main()
{
    ll t,n,i,j,k,r,p;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }

        ll ok=1,mov;


        for(i=1;i<=n;i++)
        {
            r = i%n;

            mov = i+arr[r];

            cnt[mov]++;

            if(cnt[mov]>1)
            {

                ok&=0;
                break;
            }
        }
        if(ok)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        cnt.clear();

    }
    return 0;
}

