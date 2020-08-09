#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct node
{
    ll value , need=0;
};
node total[200005];

bool cmp(node A , node B)
{
    if(A.value<B.value)
        return true;
    return false;
}
bool cmp1(node A,node B)
{
    if(A.need<B.need)
        return true;
    return false;
}

int main()
{
    ll t,n,a,b,k,i,turn;
    cin>>n>>a>>b>>k;

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&t);
        total[i].value = t;
    }

    sort(total+1,total+1+n,cmp);

    turn = a+b;
    for(i=1;i<=n;i++)
    {
        if(turn>=total[i].value)
        {
            if(a>=total[i].value)
                total[i].need =0;
            else
            {
                ll x = total[i].value-a;
                ll z = x/a;
                total[i].need = z;
                if(x%a)
                    total[i].need+=1;
            }
        }
        else
        {
            ll x = total[i].value/turn;

            if(total[i].value%turn==0)
                x--;
            ll z = (turn * x);
            ll x1 = total[i].value-z;

            if(a>=x1)
                total[i].need =0;
            else
            {
                ll x2 =x1 -a;
                ll z2 = x2/a;
                total[i].need=z2;
                if(x2%a)
                    total[i].need+=1;
            }
        }
    }
     sort(total+1,total+1+n,cmp1);
     ll sum =0;

     for(i=1;i<=n;i++)
     {
         if(total[i].need==0)
            sum++;
         else
         {

             if( k - total[i].need>=0)
                {
                     k -=total[i].need;
                     sum++;
                }
         }
     }
     cout<<sum<<endl;

}
