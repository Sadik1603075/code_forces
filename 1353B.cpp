#include<bits/stdc++.h>
using namespace std;
#define ll long long

deque<ll>a;
deque<ll>b;

bool cmp(ll A , ll B)
{
    return A>B;
}

int main()
{
    ll t,i,j,n,k,m;
    cin>>t;
    while(t--)
    {
        scanf("%lld%lld",&n,&k);

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&m);
            a.push_back(m);
        }
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&m);
            b.push_back(m);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        j = n-k;
        ll sum=0;

        while(j!=0)
        {
            sum += (a.back());
            a.pop_back();
            j--;
        }

        j = n-(n-k);

        while(j!=0)
        {
            if(a.back()>b.back())
            {
                sum +=a.back();
                a.pop_back();
            }
            else
            {
               sum +=b.back();
                b.pop_back();
            }
            j--;
        }

        a.clear();
        b.clear();
        cout<<sum<<endl;
    }
    return 0;
}

