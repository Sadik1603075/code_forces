#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[200005];
vector<ll>v;

int main()
{
    ll i,n,t;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%lld",&arr[i]);
        }

        if(arr[n]>0)
        {
            arr[n+1]=-1;
        }
        else
        {
            arr[n+1] =1;
        }

        ll sum=0,m=-1,m1=-1,k=0,j;

        for(i=1; i<=n; i++)
        {

            m = arr[i];
            if(arr[i]>0)
            {

                for(j=i; j<=n; j++)
                {
                    if(arr[j]>0)
                     {
                         m = max(m,arr[j]);
                        if(j==n)
                        {
                            k=1;
                        }
                     }

                    else
                    {
                        //cout<<m<<endl;

                        sum +=m;
                        i = j-1;
                        break;
                    }

                }

            }
            else
            {

                for(j=i; j<=n; j++)
                {
                    if(arr[j]<0)
                     {
                         m = max(m,arr[j]);
                          if(j==n)
                        {
                            k=1;
                        }
                         m1=m;
                     }
                    else
                    {
                        sum +=m;
                        i = j-1;
                        break;
                    }
                }

            }

            if(k)
                break;

        }



        sum+=m;
        cout<<sum<<endl;

    }
    return 0;
}

