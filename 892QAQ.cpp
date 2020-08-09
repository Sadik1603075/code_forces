#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int i,l,j,k,c=0;
    char s[101];
    scanf("%s",s);
     l = strlen(s);

     for(i=0;i<l;i++)
     {
         if(s[i]=='Q')
         {
             for(j=i+1;j<l;j++)
             {
                 if(s[j]=='A')
                 {
                     for(k=j+1;k<l;k++)
                     {
                         if(s[k]=='Q')
                         {
                             c++;
                         }
                     }
                 }
             }
         }
     }
     printf("%d\n",c);
     return 0;
}
