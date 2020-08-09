#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k,b,n,t,i,j,sum=0,z;
    double ans=0.0;

    cin>>k>>b>>n>>t;

    i = k+b;
    n--;
    z = n*(i*k+b);
    j = t*k+b;

    ans = (z*1.00)/(j*1.00);

    if(ans>=1.00)
    {
        cout<<ceil(ans)<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}
