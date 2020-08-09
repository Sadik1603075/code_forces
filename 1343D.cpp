#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[200005];
ll arr1[200055];
ll arr2[200055];

int main()
{
    ll i,n,t,k;
    cin>>t;

    while(t--)
    {
        scanf("%lld%lld",&n,&k);

        for(i=1;i<=n;i++)
        {
           scanf("%lld",&arr[i]);
        }
        ll half=n/2;

        for(i=1;i<=half;i++)
        {
            a = arr[i];
            b = arr[n-i+1];
            arr2[i] = arr[i]+arr[n-i+1];

            arr1[i][arr2[i]] = 0;
            arr1[i][arr2[i]+1]= 1;
            arr1[i][max(a,b)+k] =1;
            if(max(a,b)!=k)
            {
                arr1[i][max(a,b)+k+1] =2;
                arr[i][k+k]=2;
            }
            arr1[i][min(a,b)+1] = 1;

            if(min(a,b)!=1)
            {
                arr1[i][min(a,b)] = 2;
                arr1[i][2] =2;
                arr1[i][1]=2;
            }
            else
            {
                arr1[i][1]=1;
            }

        }
        ll m = LONG_LONG_MAX;
        for(i=1;i<=n;i++)
        {


        }


    }
    return 0;
}

