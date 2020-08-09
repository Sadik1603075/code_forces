#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[300005];

int main()
{
    ll t,n,i,indx,j,start,endd;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        ll l = 0,r=n+1;

        i=1;
        while(l<n)
        {
            if(arr[i]>=i-1)l++;
            else break;
            i++;
        }
        i=n;
        while(r>1)
        {
            if(arr[i]>=n-i) r--;
            else break;
            i--;
        }



        if(l>=r)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
