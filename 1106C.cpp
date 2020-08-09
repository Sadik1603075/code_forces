#include<bits/stdc++.h>
using namespace std;
int arr[3*100005];

int main()
{
    int n,i,j,k,l,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);

    long long sum=0;
    k=n/2;

    for(i=0,j=n-1;i<k,j>=k;i++,j--)
    {
        sum+=(arr[i]+arr[j])*(arr[i]+arr[j]);
    }
    cout<<sum<<endl;
}
