#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll q,n,m,t,L,R,mx,mn,ti,ok,i;
    cin>>q;
    while(q--)
    {
        cin>>n>>m;
        mn =mx=m;
        ti=0;
        ok=1;
        for(i=1;i<=n;i++)
        {
            cin>>t>>L>>R;
            ti = abs(ti-t);
            mn = mn-ti;
            mx = mx+ti;

            if(R>=mn && mx>=L)
                ok &=1;
            else
                ok &=0;
             mn = max(mn,L);
             mx = min(mx,R);
             ti=t;
        }
        if(ok)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
