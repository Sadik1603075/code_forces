#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1,v2,v3,vm,c1,c2,c3,i,j,k;
    scanf("%d%d%d%d",&v1,&v2,&v3,&vm);
    //j = (2*vm)+1;

    if(v1>=(2*vm)||v2>=(vm)||2*v3<vm)
    {
        printf("-1\n");
        return 0;
    }
    else
        {
            c3=max(v3,vm);
        }

    printf("%d %d %d\n",v1*2,v2*2,c3);

    return 0;



}
