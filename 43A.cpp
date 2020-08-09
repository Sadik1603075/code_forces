#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    int n,i,j,l1,l2,t,c1=1,c2=0;
    char s1[50],s2[50],s3[50];
    scanf("%d",&n);
    scanf("%s",s1);
    for(i=1;i<n;i++)
    {
        scanf("%s",s2);
        if(strcmp(s1,s2)==0)
            c1++;
        else
        {
            c2++;
            l1=strlen(s2);
            strcpy(s3,s2);
            s3[l1]='\0';
    }}
if(c1>c2)
{
    printf("%s\n",s1);
}
else
{
    printf("%s\n",s3);
}
    return 0;
}

