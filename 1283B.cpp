#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,a,t,b,ans,n,l1,l2,l3,l4,x;
    cin>>t;

    for(j=1;j<=t;j++)
    {
        scanf("%d%d",&n,&k);

       ans = n - (n%k);
        ans += min(k/2,n%k);
    cout<<ans<<endl;
    }
}
