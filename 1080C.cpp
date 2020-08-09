#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,x1,x2,x3,x4,y1,y2,y3,y4,i,j,k,l,t,bl,wt,overlap,wttt,blll;
    cin>>t;

    for(l =1;l<=t;l++)
    {
        wt=bl=0;
        wttt=blll=0;
        cin>>n>>m;
        ll sum = (n*m);

        if(sum%2==0)
        {
           bl = (sum/2);
           wt = (sum/2);
        }
        else
        {
            bl = (sum/2);
            wt = (sum/2)+1;
        }
        ll bll=bl;
        ll wtt=wt;
        cin>>x1>>y1>>x2>>y2;

        ll white = (x2-x1+1)*(y2-y1+1);
        if(white%2==0)
        {
            bl -=(white)/2;
            wt+=(white)/2;
        }
        else
        {
            if(y1%2!=0&&x1%2!=0)
            {
                bl-=(white/2);
               wt+=(white/2);
            }
            else if(y1%2!=0&&x1%2==0)
            {
                bl -= (white/2)+1;
                wt +=(white/2)+1;
            }
            else if(y1%2==0&&x1%2!=0)
            {
              bl-=(white/2)+1;
               wt+=(white/2)+1;
            }
            else
            {
                bl -= (white/2);
                wt +=(white/2);
            }
        }
         cout<<wt<<" "<<bl<<endl;
        // wtt=wt;
         //bll = bl;

        cin>>x3>>y3>>x4>>y4;

        ll black = (x4-x3+1)*(y4-y3+1);
       if(black==n*m)
       {
           cout<<0<<" "<<black<<endl;
           continue;
       }
        if(black%2==0)
        {
            wtt -=(black/2);
            bll+=(black/2);
        }
        else
        {
           if(y3%2!=0&&x3%2!=0)
            {
                wtt-=(black/2)+1;
               bll+=(black/2)+1;
            }
            else if(y3%2!=0&&x3%2==0)
            {
                wtt -= (black/2);
                bll +=(black/2);
            }
            else if(y3%2==0&&x3%2!=0)
            {
              wtt-=(black/2);
               bll+=(black/2);
            }
            else
            {
                wtt -= (black/2)+1;
                bll +=(black/2)+1;
            }
        }
        cout<<wtt<<" "<<bll<<endl;

        if(x3<=x2&&y3<=y2)
        {
           overlap = (x2-x3+1)*(y2-y3+1);
           if(overlap%2==0)
        {
            wttt -=(black/2);
            blll+=(black/2);
        }
        else
        {
           if(y3%2!=0&&x3%2!=0)
            {
                wttt-=(black/2)+1;
               blll+=(black/2)+1;
            }
            else if(y3%2!=0&&x3%2==0)
            {
                wttt -= (black/2);
                blll +=(black/2);
            }
            else if(y3%2==0&&x3%2!=0)
            {
              wttt-=(black/2);
               blll+=(black/2);
            }
            else
            {
                wttt -= (black/2)+1;
                blll +=(black/2)+1;
            }
        }

        }

        cout<<wttt<<" "<<blll<<endl;


    }

}
