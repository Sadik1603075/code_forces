#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ans,j,k,t,n,a,b,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;

        if(k%2==0)
        {
            x = k/2;
            y = k/2;
        }
        else
        {
            x = (k/2)+1;
            y = (k/2);
        }
        ans = (a*x);
        ans = ans - (b*y);
        cout<<ans<<endl;
    }
}
