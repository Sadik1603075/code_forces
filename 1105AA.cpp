#include<bits/stdc++.h>
using namespace std;

int arr[105];

int main()
{
    int i,j,k,l,n,cost=0,mx=INT_MAX;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<=100;i++)
    {
        cost=0;
        for(j=0;j<n;j++)
        {
            if(i>arr[j])
                cost +=(i-arr[j]-1);
            else if(arr[j]>i)
                cost+=(arr[j]-i-1);
        }
        if(cost<mx)
        {
            mx=cost;
            k=i;
            l = cost;
        }
    }
    cout<<k<<" "<<l<<endl;
}
