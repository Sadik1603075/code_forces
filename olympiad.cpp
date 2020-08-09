#include<bits/stdc++.h>
using namespace std;

int arr[601];

int main()
{
    int i,j=0,k,n;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        arr[k]++;
    }
    for(i=1;i<601;i++)
    {
        if(arr[i]>0)
        {
            j++;
        }
    }
    printf("%d\n",j);

    return 0;
}
