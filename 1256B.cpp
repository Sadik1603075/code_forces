#include<bits/stdc++.h>
using namespace std;

int arr[105];
int pos[105];
bool visited[105];

int main()
{
    int i,j,k,l,m,n,t,x;
    cin>>t;

    for(k=1; k<=t; k++)
    {
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            scanf("%d",&l);
            pos[l] = i;
            arr[i] = l;
        }

        for(i=1; i<=n-1; i++,l++)
        {
            if(visited[pos[i]-1]==0)
            {
                for(j=pos[i]; j>i; j--)
                {
                    if(visited[j-1]==0)
                    {
                        x =arr[j-1];
                        pos[x] +=1;
                        pos[i]--;
                        visited[j-1]=1;
                        swap(arr[j-1],arr[j]);
                    }
                    else
                        break;
                }
            }

        }

        for(i=1;i<=n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");

        memset(visited,0,sizeof(visited));
    }



    return 0;
}
