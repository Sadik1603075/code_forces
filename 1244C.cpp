#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll n,p,w,d,draw,remain;
    cin>>n>>p>>w>>d;

    for(ll draw = 0 ;draw < w ;draw++)
    {
        remain = p - draw*d;

        if(remain>=0 && remain%w==0 && draw + remain/w<=n)
        {
            printf("%lld %lld %lld\n",remain/w ,draw , n-(remain/w + draw));
            return 0;
        }
    }
    printf("-1\n");
}
