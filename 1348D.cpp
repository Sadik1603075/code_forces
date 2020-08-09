#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>ans;

int main()
{
    ll t,i,n,k;
    cin>>t;
    while(t--)
    {
        scanf("%lld",&n);

        for(i=1;i<=n;i*=2)
        {
            ans.push_back(i);
            n -=i;
        }
        if(n>0)
            {
                ans.push_back(n);
                sort(ans.begin(),ans.end());
            }

        cout<<ans.size()-1<<endl;
        for(i=1;i<ans.size();i++)
        {
            cout<<ans[i]-ans[i-1]<<" ";
        }
        cout<<endl;
        ans.clear();

    }
}
