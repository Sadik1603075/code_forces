#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[200005];
map<ll,ll>mp,mpindx;



int main()
{
    ll t,i,n,j,a,b,l,r,left,right,ok;
    cin>>t;

    while(t--)
    {
        cin>>n;
        l=0 , r = n+1,ok=0;

        for(i=1;i<=n;i++) {

            scanf("%lld",&arr[i]);
        }
        ll op=0;

        for(l=1 , r=n ; l<r ; )
        {
            ok=0;
            if(arr[l]==l){
                ok=1;
                l++;
            }
            if(arr[r]==r)
            {
                ok=1;
                r--;
            }
            if(ok==0)
                break;
        }

        ok=0;
        for(i=l;i<=r;i++)
        {
            if(arr[i]!=i)
                ok++;
        }
        if(ok==0)
        {
            printf("0\n");
        }
       else if(ok==r-l+1)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }


    }
    return 0;
}
