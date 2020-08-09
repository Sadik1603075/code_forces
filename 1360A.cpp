#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,i;
    cin>>t;

    while(t--)
    {
        ll a,b;
        cin>>a>>b;

        ll x,y,z;

        if(a>b)
        {
            x = b+b;

            if(x>=a)
            {
                cout<<x*x<<endl;
            }
            else
            {
                cout<<a*a<<endl;
            }
        }
        else
        {
            x = a+a;
            if(x>=b)
            {
                cout<<x*x<<endl;
            }
            else
            {
                cout<<b*b<<endl;
            }
        }
    }
}
