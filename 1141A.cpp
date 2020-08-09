#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,t,i,m;

    cin>>n>>m;

    if(m%n!=0)
    {
        printf("-1\n");
        return 0;
    }
    ll x = m/n;

    ll c=0;

    while(1)
    {
        if(x%2!=0)
            break;
        x/=2;
        c++;
    }

    while(1)
    {
        if(x==1)
            break;
        else if(x%3!=0)
            break;
        x/=3;
        c++;
    }

    if(x==1)
    {
        printf("%lld\n",c);
    }
    else
        printf("-1\n");

}
