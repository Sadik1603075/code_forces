#include<bits/stdc++.h>
using namespace std;

vector<int>v;

int arr[1000005];

int main()
{
 int p,y;

 int i,j,k,l,x=0,f1=0,r;

 scanf("%d%d",&p,&y);
    r = sqrt(y);
 l = min(p,r);

 memset(arr,1,sizeof(arr));

    for(i=2;i<=l;i++)
    {
        if(arr[i]!=0)
        {
            for(j=2;j<=10;j++)
            {
                arr[i*j]=0;
            }
        }
    }
  k=0;
    for(i=2;i<=l;i++)
    {
        if(arr[i]>0)
        {
            v.push_back(i);
            k++;
        }
    }
    int z=k;
  for(i=y;i>p;i--)
 {
     z=k;
     for(j=0;j<v.size();j++)
     {
         if(i%v[j]==0)
         {
             z--;
             continue;
         }
     }
     if(z==k)
     {
         f1=1;
         break;
     }
 }

    if(f1==1)
    {
        cout<<i<<endl;
    }
    else
    {

  cout<<"-1"<<endl;
    }
  return 0;
}
