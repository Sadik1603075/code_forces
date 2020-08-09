#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,n,t,a;
    cin>>t;
    while(t--)
    {
        cin>>n;

        ll sum=0,c=0,a=1;
        sum += n%2==0 ? n/2: n/2+1;

        for(i=2;; i++)
        {
            a *=2;
            if(a>n) break;

            c = 0;
            c = (n/(a*2));

            if(c==0) c++;
            if(c*a*2 + a <=n) c++;

            sum +=(c*i);
        }
        cout<<sum<<endl;
    }
    return 0;
}
