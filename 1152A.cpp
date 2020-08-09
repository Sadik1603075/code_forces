#include<bits/stdc++.h>
using namespace std;
int arr1[100005];
int arr2[100005];

int main()
{
    int n,m,i,j,k,l;
    cin>>n>>m;
    int c1=0,c2=0,c3=0,c4=0;

    for(i=1;i<=n;i++)
    {
        cin>>l;
        if(l%2==0)
            c2++;
        else
            c1++;
    }
    for(i=1;i<=m;i++)
    {
        cin>>l;
        if(l%2==0)
            c4++;
        else
            c3++;
    }
    int ans=0;

    if(c4>=c1)
    {
        ans+=c1;
    }
    else
    {
        ans+=c4;
    }
    if(c3>=c2)
    {
        ans+=c2;
    }
    else
    {
        ans+=c3;
    }
    cout<<ans<<endl;
}
