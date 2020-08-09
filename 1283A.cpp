#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,t,n,h,m;
    cin>>t;

    for(k=1;k<=t;k++)
    {
        scanf("%d%d",&h,&m);
        int ans = 24*60;

        l = h*60 + m;

        cout<<ans-l<<endl;

    }
}
