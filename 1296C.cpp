#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<pair<ll,ll>,ll>cur;

int main()
{
    ll i,j,k,l,n,t,odd,even;

    cin>>t;

    while(t--)
    {
        scanf("%lld",&n);
        string s;
        cin>>s;
        cur.clear();

        cur[make_pair(0,0)] =0;
        ll x=0,y=0,l=-1,r=n;

        for(i=0;i<n;i++)
        {
            if(s[i]=='L')x--;
            else if(s[i]=='R')x++;
            else if(s[i]=='U')y++;
            else if(s[i]=='D')y--;

            if(cur.count(make_pair(x,y))&& i-cur[make_pair(x,y)]+1 <r-l+1)
            {
                l =cur[make_pair(x,y)];
                r = i;
            }
            cur[make_pair(x,y)] = i+1;

        }
        if(l==-1)
        {
            printf("%lld\n",l);
        }
        else
            printf("%lld %lld\n",l+1,r+1);

    }

    return 0;
}

