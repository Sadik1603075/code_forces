#include<bits/stdc++.h>
using namespace std;
int arrh[105];
int arrm[105];

int main()
{
  int i,j,k,l,n,s,h,m,summ=0,sumh=0,sumt=0;
  cin>>n>>s;
  arrh[0]=0;
  arrm[0]=0;
  for(i=1;i<=n;i++)
  {
      cin>>h>>m;
      arrh[i]=h;
      arrm[i]=m;
  }
  for(i=1;i<n;i++)
  {
      summ=(60-arrm[i])+arrm[i+1];
      sumh=arrh[i+1]-(arrh[i]+1);
      sumt=(sumh*60)+summ+3;
      if(sumt>=(s*2)+3)
      {
          k = arrm[i]+1+s;
          if(k>=60)
          {
              printf("%d %d",arrh[i]+1,k-60);
              break;
          }
          else
          {
             printf("%d %d",arrh[i],k);
             break;
          }
      }
  }

}
