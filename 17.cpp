#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,l,n;
    char s[105];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        l = strlen(s);
        if(l>10)
        {
            printf("%c%d%c\n",s[0],l-2,s[l-1]);
        }
        else
        {
            printf("%s\n",s);
        }

    }
    return 0;

}
