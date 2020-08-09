#include<bits/stdc++.h>
using namespace std;

int main()
{
  int i,j,m,n,k,x=0;
  cin>>n;
  cin>>m;
string s[n];
  for(i=0;i<n;i++)
  {
      cin>>s[i];

  }

  for(i=0;i<n;i++)
  {

      for(j=0;j<m;j++)
      {

          if(s[i][j]=='S')
          {

              if(s[i][j+1]=='W'&&(j+1)<m)
                  x = 1;
            if(s[i][j-1]=='W'&&(j-1)>=0)
                 x = 1;
            if(s[i+1][j]=='W'&&(i+1)<n)
                x = 1;
             if(s[i-1][j]=='W'&&(i-1)>=0)
                x = 1;

          }
      }

  }
  if(x==1)
  {
      printf("No\n");
      return 0;
  }

  printf("Yes\n");
      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
              if(s[i][j]=='.')
              {
                  s[i][j]='D';
              }
              cout<<s[i][j];
          }
          cout<<endl;
      }

  return 0;
}
