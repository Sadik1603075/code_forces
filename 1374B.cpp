#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,c,ok;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        c=0,ok=0;

        while(1)
        {
            if(n%6==0)
            {
                n /=6;
                c++;
            }
            else
            {
                n = n*2;
                if(n%6!=0) break;
                c++;
            }
            if(n==1)break;
        }

        if(n==1) cout<<c<<endl;
        else printf("-1\n");
    }
}

