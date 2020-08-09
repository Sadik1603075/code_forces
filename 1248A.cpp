#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long i,j,k,l,m,n,t,l1e,l1o,l2e,l2o;
    cin>>t;

    for(k=1;k<=t;k++)
    {
        cin>>n;
        l1e=0;
        l1o=0;
        l2e=0;
        l2o=0;

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&l);

            if(l%2==0)
            {
                l1e++;

            }
            else
            {
                l1o++;
            }
        }
        cin>>m;

          for(i=1;i<=m;i++)
        {
            scanf("%lld",&l);

            if(l%2==0)
            {
                l2e++;

            }
            else
            {
                l2o++;
            }
        }

        printf("%lld\n",l1e*l2e+l1o*l2o);

    }

}

