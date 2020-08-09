#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1005];

int main()
{
    ll t,i,n,a,b,c,d,x,x1,z,z1;
    cin>>t;

    while(t--)
    {
        scanf("%lld",&n);
        cin>>a>>b>>c>>d;
        x = n*(a+b);
        z= n*(a-b);
        x1= c+d;
        z1 = c-d;

        if((x>=z1&& z<=x1)||(z>=z1&&z<=x1))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }

    return 0;
}
