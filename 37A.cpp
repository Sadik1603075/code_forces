#include<iostream>
#include<stdio.h>
#include<algorithm>
int a[1001];
using namespace std;
int main()
{
    int n,i,j,k,m=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
        a[arr[i]]++;
    }
for(i=0 ; i<1001; i++)
{
    if(a[i]!=0)
    {
        c++;
        if(a[i]>m)
            m=a[i];
    }

}
printf("%d %d\n",m,c);
return 0;


}
