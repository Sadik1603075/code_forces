#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];

int main()
{
    ll n,i,t,l,j;
    cin>>t;
    arr[1]=2;

    for(i=2;i<=31;i++)
    {
       arr[i] = 2* arr[i-1];
    }

    while(t--)
    {
        cin>>n;
        l = n/2;
        j = n;
        ll sum1=arr[n];

        for(i=1;i<l;i++)
        {
            sum1 +=arr[i];
        }
        ll sum2=0;

        for(i=l;i<n;i++)
        {
            sum2+=arr[i];
        }
        cout<<abs(sum1-sum2)<<endl;


    }
    return 0;
}

