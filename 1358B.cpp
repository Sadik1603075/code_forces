#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200005];

int main()
{
    ll t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=1;i<=n;i++)
        {
           scanf("%lld",&arr[i]);
        }
        sort(arr+1,arr+1+n);
        ll m = n+1;

        for(i=n;i>=1;i--)
        {
           if(arr[i]>=m)
                m--;
           else
                break;
        }
        cout<<m<<endl;
    }
}
