#include<bits/stdc++.h>
using namespace std;

long long sum[100005],sum1;
vector<int>v;


int main()
{
    long long  i,j,k,l,n,r,ans=0,mx=0,cnt=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&l);
        if(l>mx)
            mx = l;
        sum[i]= l;
    }
    for(i=1;i<=n;i++)
    {
        if(sum[i]==mx)
            ans++;
        else
            ans = 0;
        if(ans>cnt)
            cnt = ans;
    }
    cout<<cnt<<endl;


}
