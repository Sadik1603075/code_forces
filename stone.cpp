#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j=0,n;
    char s[55];

    scanf("%d",&n);
    scanf("%s",s);

    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
            j++;
    }
    printf("%d\n",j);

    return 0;

}
