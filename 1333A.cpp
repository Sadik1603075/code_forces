#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,t,i,m,j;

    cin>>t;

    while(t--)
    {
        string s[105];
        scanf("%lld%lld",&n,&m);



        for(i=0; i<n; i++)
        {
            for(j=0;j<m;j++)
            {
                s[i] +="B";
            }
        }
        s[0][0] ='W';

        for(i=0;i<n;i++)
        {
            cout<<s[i]<<endl;
            s[i].clear();
        }




    }

    return 0;
}
