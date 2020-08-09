#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll t,i,j,n,m;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&n);

        m = n/2;
        ll sum=0;

        while(n>1)
        {
            sum += (2*n*m);
            n -=2;
            sum += (2*n*m);
            m--;
        }
        cout<<sum<<endl;


    }
    return 0;
}
