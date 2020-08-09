#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,i,j,k,l,m,sum=0,t,zor=0,bizor=0;
    t=1;
    while(t--)
    {
        zor=0;
        bizor=0;

        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&m);

            if(m%2==0)
                zor++;
            else
                bizor++;
        }

        sum = (zor/2) + (bizor/2);
        sum*=2;
        cout<<sum<<endl;

    }
    return 0;
}


