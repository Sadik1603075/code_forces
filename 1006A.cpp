#include<bits/stdc++.h>

using namespace std;
int arr[1005];
int main()
{
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        arr[i]-=1;
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
