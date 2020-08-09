#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c1=0,c2=0,c3=0,val;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&val);
        if(val==1)
            c1++;
        else
            c2++;
    }
    if(c2==0)
        c3 = c1/3;
    else if (c1==0)
        c3=0;
    else if(c2==c1)
        c3=c1;
    else if(c2>c1)
        c3 = c1;
    else
    {
        c3 = c2+((c1-c2)/3);
    }

    printf("%d\n",c3);
    return 0;

}
