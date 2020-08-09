#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n,i,a,b;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>n;

        for(i=1;i<=1000006;i++)
        {
            ll x= a+b;
            if(a>b)
                b=x;
            else
                a=x;
            if(x>n)
                break;
        }
        cout<<i<<endl;
    }
}
