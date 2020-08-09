#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,l,sum1=0,sum2=0,n,k;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        if(k>0)
        {
            sum1 +=k;
        }
        else
        {
            sum2 +=k;
        }

    }
    j = sum1-sum2;

    printf("%d\n",j);

    return 0;
}
