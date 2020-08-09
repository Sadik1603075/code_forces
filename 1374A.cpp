#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,x,y,i,p,q,r;
    cin>>t;

    while(t--)
    {
        cin>>x>>y>>n;

           ll z = n/x;
            p =(n/x);
            q = (p+1)*x;
            p *= x;
            z = x -y ;
            p-=z;
            q-=z;
            if(q<=n)
            {
                printf("%lld\n",q);
            }
            else
            {
                printf("%lld\n",p);
            }


    }
}
