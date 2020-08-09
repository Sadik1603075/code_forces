#include<bits/stdc++.h>
using namespace std;

int arr1[55][55];
int arr2[55][55];

int main()
{
    int i,j,k,l,m,n,flag=0;
    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {

        for(j=0;j<m;j++)
        {
           if(arr1[i][j]>=arr2[i][j])
           {
               swap(arr1[i][j],arr2[i][j]);
           }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr1[i][j-1]>=arr1[i][j]&&j)
                flag=1;
            if(arr1[i-1][j]>=arr1[i][j]&&i)
                flag=1;
            if(arr2[i][j-1]>=arr2[i][j]&&j)
                flag=1;
            if(arr2[i-1][j]>=arr2[i][j]&&i)
                flag=1;

        }
    }

    if(flag)
    {
        printf("Impossible\n");
    }
    else
    {
        printf("Possible\n");
    }

return 0;
}
