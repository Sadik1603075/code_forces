#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,n,t,a,b,c,a1,b1,c1,mov,mov1,ansa,ansb,ansc;
    cin>>t;
    while(t--)
    {
        mov=INT_MAX,mov1=0;
        scanf("%lld%lld%lld",&a,&b,&c);

        for(i=2;i<=10000;i++)
        {
            mov1 = abs(a-i);
            a1 = i;

            if(b%a1==0)
            {
                b1=b;
            }
            else
            {
                ll xadd = b - (b/a1)*a1;
                ll ysub = a1 - b%a1;

                if(xadd>ysub)
                {
                    b1= b+ysub;
                    mov1 += ysub;
                }
                else
                {
                    b1 = b - xadd;
                    if(b1==0)
                    {
                       b1= b+ysub;
                      mov1 += ysub;
                    }
                    else
                    mov1 += xadd;
                }
            }


            if(c%b1)
            {
                c1 = c;
            }
            else
            {
                ll xadd = c - (c/b1)*b1;
                ll ysub = b1 - c%b1;

                if(xadd>ysub)
                {
                    c1 = c+ysub;
                    mov1 += ysub;
                }
                else
                {
                    c1 = c - xadd;
                    if(c1==0)
                    {
                      c1 = c+ysub;
                    mov1 += ysub;
                    }
                    else
                    mov1 += xadd;
                }

            }


            if(a1>10000||b1>10000||c1>10000)continue;

            if(mov1<mov)
            {
                mov = mov1;
                ansa=a1;
                ansb=b1;
                ansc=c1;
            }
        }

        printf("%lld\n%lld %lld %lld\n",mov,ansa,ansb,ansc);
    }
}
