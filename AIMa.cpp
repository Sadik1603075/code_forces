#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k=-1,l,n,m,r,c,r1,r2,x;
    cin>>n>>m;
    string s[150];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }

    x=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

        if(s[i][j]=='B')
         {
             x++;
             r1=i;
             r2=j;
         }
         if(s[i][j]=='B'&&k==-1)
         {
             r=i+1;
             c=j+1;
             k=1;
         }


        }
    }

    int ans = sqrt(x);
    ans/=2;

    r = r+ans;
    c = c+ans;

   printf("%d %d\n",r,c);

}
