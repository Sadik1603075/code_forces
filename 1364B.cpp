#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005];
vector<ll>v;

int main()
{
    ll n,t,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
        }

        for(i=1;i<=n;i++)
        {
            if(i==1||i==n)
                {
                    v.push_back(arr[i]);
                    continue;
                }

            if((arr[i]>arr[i-1] && arr[i]>arr[i+1]) || arr[i-1]>arr[i] && arr[i+1]>arr[i])
                v.push_back(arr[i]);
        }
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
        v.clear();
    }
}
