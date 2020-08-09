#include<bits/stdc++.h>
using namespace std;

int arr[1000005];

int main()
{
   int i,j,k,l,m=0,n,c=0;

   string s;
   char a1,a2,b1,b2,c1,c2;
   cin>>n>>s;

   for(i=0;i<n-1;i++)
   {
       c=0;
       a1 =s[i];
       a2 =s[i+1];


       for(j=0;j<n-1;j++)
       {
           b1 =s[j];
           b2 =s[j+1];

           if(a1==b1&&a2==b2)
           {
               c++;
           }
           if(c>m)
           {
               m =  c;
               c1 = a1;
               c2= a2;
           }
       }
   }
   cout<<c1<<c2<<endl;

}
