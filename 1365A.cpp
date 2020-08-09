#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n,i,a,b,m,val,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        a=0,b=0;

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%lld",&val);
                if(val==1)
                {
                    a++;
                    b++;
                }
            }
        }

        ll mn = min(n-a,m-b);

        if(mn%2)
        {
            cout<<"Ashish"<<endl;
        }
        else
            cout<<"Vivek"<<endl;



    }
    return 0;
}

