#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,r,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;

        if(n>r)
        {
            ans = (r*(r+1))/2;
        }
        else
        {
            ans = (n*(n+1))/2;
            ans -= (n-1);
        }
        cout<<ans<<endl;
    }
}
