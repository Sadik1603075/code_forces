#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int arr1[100005];

int main()
{
    int n,m,i,j,k=0,l;
    cin>>n>>m;

    for(i=0; i<m; i++)
    {
        scanf("%d",&arr[i]);
    }
    i = -1;

    for(j=0; j<m; j++)
    {
        k=0;

        for(i=i+1; i<m; i++)
        {
            if(arr1[arr[i]]==0)
            {
                arr1[arr[i]]=1;
                k++;
            }

            if(k==n)
            {

                printf("1");

                for(l=0;l<=n;l++)
                    arr1[l]=0;

                break;
            }
            else
            {
                printf("0");
            }


        }
    }
}
