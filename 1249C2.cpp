#include<bits/stdc++.h>
using namespace std;

#define Lng long long



int main()
{
    Lng i,j,k,l,m,n,t,pos2=-1;
    cin>>t;

    for(k=1;k<=t;k++)
    {
        scanf("%lld",&n);
        pos2=-1;
        m = n;

        vector<Lng> v;

        while(n>0)
        {
            l = n%3;
            v.push_back(l);

            if(l==2)
            {
                pos2 = v.size()-1;
            }
            n /=3;
        }
        v.push_back(0);

        if(pos2!=-1)
        {
            int pos0 = find(v.begin()+pos2,v.end(),0)-v.begin();
            v[pos0]=1;

            for(i=pos0-1;i>=0;i--)
            {
                v[i]=0;
            }
        }

        Lng ans=0;
        Lng pw =1;
        l= v.size();


        for(i=0;i<l;i++)
        {
            ans += pw*v[i];
            pw*=3;
        }
        if(v.back()==1)
            ans = pw/3;

        cout<<ans<<endl;

    }


    return 0;
}
