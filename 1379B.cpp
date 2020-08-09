#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll t,l,r,m,a,b,c,i,k;
    cin>>t;

    while(t--)
    {
        cin>>l>>r>>m;

        for(i=l;i<=r;i++)
        {
           k = m%i;

           if(m>=i)
           if(r-l >= k)
           {
               a = i ;
               b = r-k;
               c = r;
               break;
           }

           k = i - k;

           if(r-l>=k)
           {
               a = i;
               b = r;
               c = r-k;
               break;
           }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
