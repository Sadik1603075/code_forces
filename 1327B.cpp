#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool arr[100005];
vector<ll>v1;
set<ll>s1;

int main()
{
    ll i,j,k,l,n,m,t,x;
    cin>>t;

    while(t--)
    {
        cin>>n;
        x=0;

        for(i=1;i<=n;i++)
        {

            cin>>k;
            l =1;
            for(j=1;j<=k;j++)
            {
                scanf("%lld",&m);
                if(l==1 && arr[m]==0)
                {
                    arr[m]=1;
                    l=0;
                }
            }
            if(l)
            {
               x=i;

            }
        }

        if(x)
        {
            m=n;
            for(i=1;i<=n;i++)
            {
                if(arr[i]==0)
                {
                   m =min(m,i);
                   arr[i]=0;
                }

                else
                    arr[i]=0;
            }
            printf("IMPROVE\n");
            printf("%lld %lld\n",x,m);
        }
        else
        {
            printf("OPTIMAL\n");
            for(i=1;i<=n;i++)
            {
                arr[i]=0;
            }
        }


    }

    return 0;
}
