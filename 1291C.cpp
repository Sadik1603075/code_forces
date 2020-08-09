#include<bits/stdc++.h>
using namespace std;
#define ll long long
deque<ll>dq;

int main()
{
    ll n,i,t,m,k,val;
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>k;

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&val);
            dq.push_back(val);
        }
        ll take = k;

        if(k>=m)
            take=m-1;

        for(i=1;i<=m-1;i++)
        {
            ll x = dq.front();
            ll y = dq.back();

            if(x==y)
                continue;

            if(x>y && take>0)
            {
                dq.pop_back();
                take--;
            }
            else if(y>x && take>0)
            {
                dq.pop_front();
                take--;
            }
            else if(x>y)
            {
                dq.pop_front();
            }
            else if(y>x)
                dq.pop_back();

        }
        cout<<max(dq.front(),dq.back())<<endl;
        dq.clear();


    }
}
