#include<bits/stdc++.h>
using namespace std;

int arr[100];
int arr1[55][3];

int main()
{
    int i,j,k,l,n,h,m;

    cin>>n>>h>>m;

    for(i=1;i<=m;i++)
    {
        cin>>arr1[i][0]>>arr1[i][1]>>arr1[i][2];
    }

    memset(arr,-1,sizeof(arr));


    for(i=1;i<=m;i++)
    {
        for(j=arr1[i][0];j<=arr1[i][1];j++)
        {
            if(arr[j]==-1)
                arr[j] = arr1[i][2];
            else
            {
                if(arr[j]>arr1[i][2])
                    arr[j] = arr1[i][2];
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        if(arr[i]==-1)
        {
            arr[i] =h;
        }
    }
    int sum=0;

    for(i=1;i<=n;i++)
    {
        sum+=(arr[i]*arr[i]);
    }
    cout<<sum<<endl;

    return 0;
}
