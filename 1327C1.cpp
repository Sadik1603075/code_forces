#include<bits/stdc++.h>
using namespace std;

int arr[205][205];
int pos[205][5];
int con[205][5];

int main()
{
    int i,j,n,m,k,l,c;
    cin>>n>>m>>k;
    string ans="";

    for(i=1;i<=k;i++)
    {
        scanf("%d%d",&arr[i][1],&arr[i][2]);
    }
    for(i=1;i<=k;i++)
    {
        scanf("%d%d",&con[i][1],&con[i][2]);
    }
    int x=0,y=0,xi,yi,xf,yf;

    for(i=1;i<=m;i++)
        ans+="R";
    for(i=1;i<=n;i++)
        ans+="D";

    for(i=1;i<=n;i++)
    {
        for(j=1;j<m;j++)
        {
            if(i%2==1)
                ans+="L";
             else
                ans+="R";
        }
        if(i<n)
        ans+="U";
    }


    cout<<ans.size()<<endl;
    cout<<ans<<endl;
}

