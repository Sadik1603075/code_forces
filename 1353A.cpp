#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll t,i,j,n,m;
    cin>>t;
    while(t--)
    {
        scanf("%lld%lld",&n,&m);

        if(n==1)
        {
            printf("0\n");
            continue;
        }
        else if(n==2)
        {
            printf("%lld\n",m);
        }
        else
        {
            printf("%lld\n",2*m);
        }
    }
    return 0;
}

