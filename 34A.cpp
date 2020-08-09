#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll arr[1005];


int main()
{
    ll m,n,sum=0,i,val;
    cin>>n;

    for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        arr[n+1] = arr[1];

   ll mn = INT_MAX,indx1=0,indx2=n;

    for(i=2;i<=n+1;i++)
    {
        if(abs(arr[i]-arr[i-1])< mn)
        {
            mn = abs(arr[i]-arr[i-1]);
            if(i==n+1)indx1=1;
            else indx1=i;

            indx2=i-1;
        }
    }

    cout<<indx1<<" "<<indx2<<endl;
    return 0;
}
