#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll x = n*m;

        if(x%2==0)
        {
            cout<<x/2<<endl;
        }
        else
        {
            cout<<x/2+1<<endl;
        }
    }
}
