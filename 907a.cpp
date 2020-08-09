#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v1,v2,v3,vm,i,j,k;
    scanf("%d%d%d%d",&v1,&v2,&v3,&vm);

    if(vm>2*v3)
    {
    printf("-1\n");
    return 0;

    }

    if(vm<v3)
    {
        printf("%d %d %d\n",v1,v2,v3);
    }
    else if(vm==v3)
    {
     printf("%d %d %d\n",v1,v2,v3);

    }
    else
        {
            i = vm-v3;
                    printf("%d %d %d\n",v1+i,v2+i,v3+i);

        }
    return 0;
}
