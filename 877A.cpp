#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    int n,i,j,sum=0,t,m,k,c=0;
    char s1[105],s2[105];
    scanf("%s",s1);

    sum = strlen(s1);
    for(i=1,k=0;i<sum;i++)
    {
       if(s1[i]=='_'||(s1[i]>='A'&&s1[i]<='Z'))
       {
           s2[k]='\0';
           if(strcmp("Danil",s2)==0||strcmp("Olya",s2)==0||strcmp("Slava",s2)==0||strcmp("Ann",s2)==0||strcmp("Nikita",s2)==0)
            c++;
           i++;
           k=0;
       }
       else{

        s2[k]=s1[i];
        k++;
       }
    }
if(c==1)
    printf("YES\n");
else
    printf("NO\n");
printf("%d",c);
    return 0;
}

