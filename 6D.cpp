#include<bits/stdc++.h>
using namespace std;

vector<long long>v;

int main()
{
    long long i,j,k,l,m,n,gcd;
    cin>>n;
    l = sqrt(n);
    m=0;
    gcd = n;

    for(i=2;i<=l;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            v.push_back(n/i);
            m=1;
        }
    }

    if(m==0)
    {
        printf("%lld\n",n);
        return 0;
    }

    gcd = v[0];
    for(i=1;i<v.size();i++)
    {
        gcd = __gcd(gcd,v[i]);
    }


    cout<<gcd<<endl;
    return 0;
}
