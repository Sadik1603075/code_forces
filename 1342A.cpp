#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
    ll a,b,x,y,t,i;
    cin>>t;

    while(t--)
    {
        scanf("%lld%lld%lld%lld",&x,&y,&a,&b);
        ll m[10],x1,x2,y1,y2,m1 = LONG_LONG_MAX;

        for(i=0;i<10;i++)
        {
            m[i]=LONG_LONG_MAX;
        }

        x1=x2=x;
        y1=y2=y;
        if(x>y)
        {
           y1 = (x-y);
           x1 -=y;
           m[1] = (y*b) + (x1*a);
           m[2] = (y1*a) +(b*x2);

        }
        else
        {
            x1 = y-x;
            y1-=x;
            m[3] =(x*b) + (y1*a);
            m[4] = (x1*a) + (b*y2) ;
        }

        m[5] = (a*x) + (a*y);

        for(i=1;i<=5;i++)
            m1 = min(m1,m[i]);

        cout<<m1<<endl;
    }

}
