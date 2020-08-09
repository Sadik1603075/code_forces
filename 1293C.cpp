#include<bits/stdc++.h>
using namespace std;
int arr[3][100005];

int main()
{
    int i,j,k,l,m,n,q,r,c;
    cin>>n>>q;

    int block=0;

    for(i=1; i<=q; i++)
    {
        scanf("%d%d",&r,&c);

        if(arr[r][c]==0)
            arr[r][c] =1;
        else
        {
            arr[r][c] =0;
            if(r==2)
            {
                if(arr[r][c-1]==0 && arr[r-1][c]==0 && arr[r-1][c+1]==0)
                {
                    if(block)
                    block--;
                }
                if(arr[r-1][c-1]==0 && arr[r-1][c]==0 && arr[r][c+1]==0)
                {
                    if(block)
                    block--;
                }
            }
            else
            {
                if(arr[r][c-1]==0 && arr[r+1][c]==0 && arr[r+1][c+1]==0)
                {
                    if(block)
                    block--;
                }
                if(arr[r+1][c-1]==0 && arr[r+1][c]==0 && arr[r+1][c+1]==0)
                {
                    if(block)
                    block--;
                }

            }

        }

        if(r==2)
        {
            if(arr[r-1][c]==1 || arr[r-1][c-1]==1 || arr[r-1][c+1]==1)
            {
                block++;
            }
        }
        else
        {
            if(arr[r+1][c]==1 || arr[r+1][c-1]==1 || arr[r+1][c+1]==1)
            {
                block++;
            }
        }

        if(block==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
