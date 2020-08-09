#include<bits/stdc++.h>
using namespace std;
int arr[1000006];
int arr1[1000006];
int main()
{
    int i,j,k,n,m;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr1[0]=1;
    for(i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr1[i]=arr1[i-1]+1;
        }
        else
        {
            arr1[i]=1;
        }
    }
    int mm=0;
    for(i=0;i<n;i++)
    {
        if(arr1[i]>mm)
        {
            mm = arr1[i];
        }

    }
    cout<<mm<<endl;
}
