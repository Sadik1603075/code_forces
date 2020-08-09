#include<bits/stdc++.h>
using namespace std;
int arr[105];

int main()
{
    int i,j,c=0,n,k=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(arr[n-1]-arr[0]==n-1&&(arr[0]==1||arr[n-1]==1000))
    {
        printf("%d\n",n-1);
        return 0;
    }
    if(arr[0]==1)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i+1]-arr[i]==1)
                c++;
            else
                break;
        }
    }
    k = max(k,c);
    c=0;
    if(arr[n-1]==1000)
    {
        for(j=n-1;j>=0;j--)
        {
            if(arr[j]-arr[j-1]==1)
                c++;
                else
                    break;
        }
    }
    k =max(k,c);
    c=0;

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[j+1]-arr[j]==1)
                c++;
            else
                break;
        }

        if(c>0)
        k =max(k,c-1);
        c=0;
        i=j;
    }

    cout<<k<<endl;
}
