#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,m=0,no=1000,l1,l2;

    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        {
            no =i+1;
        }
        if(arr[i]==n)
        {
            m = i+1;
        }
    }
     if(arr[0]==1||arr[n-1]==1||arr[0]==n||arr[n-1]==n)
    {
        printf("%d\n",n-1);
        return 0;
    }

        if(m>no)
            printf("%d\n",m-no+max(n-m,no-1));
        else
            printf("%d\n",no-m+max(n-no,m-1));


    return 0;
}
