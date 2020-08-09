#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,c,d,x,y,x1,yy1,x2,y2;

bool check(int u,int v)
{
    if(u<=x2 && u>=x1 && v<=y2 && v>=yy1 &&(x1<x2 || a+b==0) && (yy1<y2 || c+d==0) )
    {
        return true;

    }
    return false;
}

int main()
{
    ll i,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>yy1>>x2>>y2;
        bool ok = true;

        x -=a;
        x +=b;
        y -=c;
        y +=d;
        ok &= check(x,y);
        if(ok)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}
