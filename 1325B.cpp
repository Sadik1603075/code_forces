#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<ll>ans;
int main()
{
    ll t,x,val;
    cin>>t;
    while(t--)
    {
        cin>>x;
        for(int i=1;i<=x;i++)
        {
            scanf("%lld",&val);
            ans.insert(val);
        }
        cout<<ans.size()<<endl;
        ans.clear();
    }
    return 0;
}

