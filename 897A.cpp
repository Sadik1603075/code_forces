#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
int arr[26];
using namespace std;
int main()
{
    int n,m,l,r,i,j,k,w;
    scanf("%d%d",&n,&m);

    char s[n];
    char c1,c2;
    scanf("%s",s);
    printf("%s",s);

    for(i=0;i<m;i++)
    {
        scanf("%d%d ",&l,&r);
        scanf("%c %c",&c1,&c2);
       k = 'a'-c1;
       w = 'a' - c2;
       swap(arr[k],arr[w]);
       arr[w]=0;
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]>0)
        {
            while(arr[i]--)
            {
                printf("%c",'a'+i);
            }
        }
    }
    return 0;


}
