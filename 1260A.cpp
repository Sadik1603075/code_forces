#include<bits/stdc++.h>
using namespace std;

int position[100],n;
bool taken[104];

void permutation(int idx)
{
    if(idx == n)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ",position[i]);
        }
        printf("\n");
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(taken[i]==false)
        {
            taken[i]=true;
            position[idx] = i;
            permutation(idx+1);
            taken[i]=false;
        }
    }
}

int main()
{
    int i,j,k,l,m,t;
    scanf("%d",&t);

    for(k=1; k<=t; k++)
    {
        scanf("%d",&n);

        memset(taken,false,sizeof(taken));
        permutation(0);
    }
    return 0;
}

