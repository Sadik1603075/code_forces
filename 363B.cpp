#include<bits/stdc++.h>
using namespace std;

long long arr[300005];
long long arr1[300005];

int main()
{
    long long i,j,k,l=0,m=LONG_LONG_MAX,n,c=0;

    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&arr1[i]);
        l+=arr1[i];
        arr[i]=l;
    }

    for(i=1;i<=n-k+1;i++)
    {
        l=0;
        l=arr[i+k-1]-arr[i-1];
        if(l<m)
        {
            m=l;
            c=i;
        }
        //cout<<m<<"  "<<c<<endl;
    }
    cout<<c<<endl;

}
