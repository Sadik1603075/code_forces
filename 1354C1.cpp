#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.)


int main()
{
    ll t,i,j;
    cin>>t;

    while(t--)
    {
        double n,angle=1.0,ans;
        cin>>n;

        angle = pi/(2*n);
        ans = cos(angle);
        ans/= sin(angle);

        printf("%0.9lf\n",ans);
    }
}
