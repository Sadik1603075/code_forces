#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;

int main()
{
    ll i,j,k,l,n,m,c=0,sum=0,val,t,ans=0,z;

    cin>>t;
    for(z=1; z<=t; z++)
    {
        c=0;
        sum=0;
        ans=0;
        v.clear();

        cin>>n>>m;

        k = n/m;

        j = (m%10);

        while(m!=0)
        {

            m=(m%10);
            sum+=m;
            v.push_back(m);
            m+=j;
            m=(m%10);
        }
        v.push_back(0);

        int x = v.size();

        if(k<=x)
        {
            for(i=0; i<=k-1; i++)
            {
                ans+=v[i];
            }

        }
        else
        {
            l = k/x;
            ans = sum*l;
            k -= (l*x);

            for(i=0; i<=k-1; i++)
                ans+=v[i];
        }
        cout<<ans<<endl;
    }

}
