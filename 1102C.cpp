#include<bits/stdc++.h>
using namespace std;
int arr[105];

int main()
{
    int n,x,y,i,j,k,c1=0,c2=0;
    cin>>n>>x>>y;

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    if(x>y)
    {
        printf("%d\n",n);
        return 0;
    }
    for(i=0;i<n;i+=2)
    {
        if(arr[i]<=x)
        {
            c1++;
        }
    }
    cout<<c1<<endl;

}
