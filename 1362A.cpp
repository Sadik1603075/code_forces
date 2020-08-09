#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1005];

int main()
{
    ll i,n,t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;

        ll x = __gcd(a,b);
        ll z1= b/x;
        ll z2 = a/x;
        ll flag=0;
        ll c=0;
        while(z1!=1)
        {
            if(z1%2 !=0)
            {
                flag =1;
                break;
            }
            z1/=2;
            c++;
        }
        if(flag)
        {
            printf("-1\n");
            continue;
        }

        ll eight = c/3;
        c -= (eight*3);
        ll four = c/2;
        c -= (four*2);
        ll two = c;

        ll ans=eight+four+two;

        c=0;
        while(z2!=1)
        {
            if(z2%2!=0)
            {
                flag=1;
                break;
            }
            z2/=2;
            c++;

        }

        if(flag)
        {
            printf("-1\n");
            continue;
        }

        eight = c/3;
        c -= (eight*3);
        four = c/2;
        c -= (four*2);
        two = c;

         ans +=eight+four+two;



    cout<<ans<<endl;


    }
}
