#include<bits/stdc++.h>
using namespace std;
#define ll long long
deque<ll>p,q;


int main()
{
    ll t,i,n,k,j,x,y,z;
    cin>>t;

    while(t--)
    {
        scanf("%lld",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&k);
            p.push_back(k);
        }
        q.push_back(0);

        for(i=0;i<n;i++)
        {
            x = p.front();
            y = p.back();
            z = q.back();


            if(x>=z || y >= z)
            {
               if(x>=y)
               {
                   if(y>=z)
                   {
                       p.pop_back();
                       q.push_back(y);
                   }
                   else
                   {
                       p.pop_front();
                       q.push_back(x);
                   }
               }
               else if(y>x)
               {
                   if(x>=z)
                   {
                       p.pop_front();
                       q.push_back(x);
                   }
                   else
                   {
                       p.pop_back();
                       q.push_back(y);
                   }
               }

            }
            else
                break;
        }


        for(i=0;i<q.size();i++)
            cout<<q[i]<<" ";
        cout<<endl;
        cout<<p.size()<<endl;

        p.clear();
        q.clear();


    }
    return 0;
}

