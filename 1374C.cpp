#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,x,y,i,p,q,r;
    cin>>t;

    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        x =s.size();
        p=0,q=0;
        for(i=0;i<x;i++)
        {
            if( p==0 && s[i]==')' )continue;

            else if(s[i]==')')
            {
                p -=1;
                q++;
            }
            else {
                p++;
            }
        }
        n-=(q*2);
        cout<<n/2<<endl;

    }
}

