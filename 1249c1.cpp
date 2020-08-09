#include<bits/stdc++.h>
using namespace std;

int p[11];
int q[11];
int arr[100005];


int main()
{
    int i,j,k,l,m,n,t,sum=0;;
    cin>>t;

     sum=0;
     m =1;
     p[0]=1;
     q[0]=1;

     for(i=1;i<=9;i++)
     {
         m*=3;
         p[i] =m;
         arr[m] = m;
         q[i] +=q[i-1]+p[i];
     }

       for(i=9;i>=1;i--)
     {
         for(j=i-1;j>=0;j--)
         {
             arr[p[i]+p[j]] = p[i]+p[j];

             arr[p[i]+q[j]] = p[i]+q[j];
         }

     }




        sum = p[7]+q[6];

     for(i=0;i<=9;i++)
     {
         cout<<p[i]<<" ";
     }
     cout<<endl;

     for(i=0;i<=9;i++)
     {
         cout<<q[i]<<" ";
     }
     cout<<endl;

     for(i=0;i<=50;i++)
     {
         cout<<arr[i]<<" ";
     }







            return 0;
}

