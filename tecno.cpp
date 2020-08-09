#include<bits/stdc++.h>
using namespace std;
int arr[10][260];

int main()
{
    int n,a,b,i,j,c=0,p=0,x=0,k;

    scanf("%d%d%d",&n,&a,&b);
    i = n;
    while(i!=1)
    {
        i /=2;
        c++;
    }
    for(i=1;i<=n;i++)
    {
        arr[0][i] =i;
    }

    for(i=1;i<=c;i++)
    {
        for(j=1,k=1;j<=n;j+=2,k++)
        {

            if(arr[i-1][j]==a&&arr[i-1][j+1]==b||arr[i-1][j]==b&&arr[i-1][j+1]==a)
            {
                x = 1;
                break;
            }
            if(arr[i-1][j]==a||arr[i-1][j+1]==a)
            {
                arr[i][k] = a;

            }
            else if(arr[i-1][j]==b||arr[i-1][j+1]==b)
            {
                arr[i][k] = b;
            }
            else
            {
                arr[i][k] = max(arr[i-1][j],arr[i-1][j+1]);
            }
        }
        p++;

        if(x==1)
        {
            break;
        }
    }

    if(p==c)
    {
        cout<<"Final!"<<endl;
    }
    else
    {
        cout<<p<<endl;
    }




}

