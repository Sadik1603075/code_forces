#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200003];

int main()
{
    ll t,i,n,k,j;
    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        k = arr[n];

        for(i=n-1;i>=1;i--)
        {
            if(arr[i]>=k)
                k= arr[i];
            else
                break;
        }
        k = arr[i];

        for(i=i-1;i>=1;i--)
        {
            if(arr[i]<=k)
                k = arr[i];
            else
                break;
        }
        if(i<0)
            i=0;
        cout<<i<<endl;



    }
    return 0;
}
