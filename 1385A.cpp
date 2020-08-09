#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1003];

int main()
{
    ll t,i,n,k,j,a,b,c;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c;
        k=0;
        ll x = max(a,max(b,c));

        if(a==x)k++;
        if(b==x)k++;
        if(c==x)k++;

        if(k<2)
        {
            printf("NO\n");
        }
        else{
            j = min(a,min(b,c));
            printf("YES\n");
            printf("%lld %lld %lld\n",x,j,j);
        }

    }
    return 0;
}

