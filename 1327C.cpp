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

    for(i=1;i<=k;i++)
    {
        xi=arr[i][1];
        yi=arr[i][2];

        xf=con[i][1];
        yf=con[i][2];

        if(xi-xf>0)
        {
            c=xi-xf;
            for(j=1;j<=c;j++)
                ans+="U";

            arr[i+1][1] -=c;

            if(arr[i+1][1]<1)
                arr[i+1][1]=1;

        }
        else if(xi-xf<0)
        {
            c = xf-xi;

            for(j=1;j<=c;j++)
                ans+="D";

            arr[i+1][1] +=c;

            if(arr[i+1][1]>n)
               arr[i+1][1]=n;
        }

        if(yi-yf>0)
        {
            c = yi-yf;

             for(j=1;j<=c;j++)
                ans +="L";

            arr[i+1][2] -=c;

            if(arr[i+1][2]<1)
                arr[i+1][2]=1;
        }
        else if(yi-yf<0)
        {
           c = yf-yi;

           for(j=1;j<=c;j++)
                ans +="R";

           arr[i+1][2] +=c;

           if(arr[i+1][2]>m)
            arr[i+1][2]=m;
        }
    }
    cout<<ans.size()<<endl;
    cout<<ans<<endl;
}
