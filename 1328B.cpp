#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];

int main()
{
    ll n,t,i,k,y,z,x,ans,dif,zz;
    cin>>t;
    string s,a,b;
    while(t--)
    {

        cin>>n>>k;
        x = sqrt(4*2*k + 1);
        x -=1;
        x /=2;
        ans =x;

        z = x+1;
        if(z%2==0)
        {
            z/=2;
        }
        if(x%2==0)
            x/=2;
        y =x*z;
        dif = k -y;

        if(dif==0)
        {
            ans--;
            for(i=1; i<=ans; i++)
                b+="a";
            a +="bb";
            for(i=1; i<=n-ans-2; i++)
                s+="a";
            cout<<s<<a<<b<<endl;
            s.clear();
            a.clear();
            b.clear();
            continue;
        }

        for(i=1; i<dif; i++)
        {
            b +="a";
        }
        dif --;
        zz = ans - dif ;


        a +="b";
        for(i=1; i<=zz; i++)
        {
            a +="a";
        }
        a +="b";
        for(i=1; i<=n -(ans+2); i++)
        {
            s+="a";
        }
        cout<<s<<a<<b<<endl;
        s.clear();
        a.clear();
        b.clear();
    }

    return 0;
}

