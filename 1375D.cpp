#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];
bool operator<(ll A , ll B)
{
    return A>B;
}
priority_queue<ll>v;

int main()
{
    ll t,i,n,j,val;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&val);
            arr[val]++;
        }
        for(i=0;i<=n;i++)
        {
            if(arr[i]==0)
            {
                v.push_back(i);
            }
        }
    }
}
