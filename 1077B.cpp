#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int arr[105];

int main()
{
    int i,k=0,j,l,n,m;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(i=2;i<n;i++)
    {
        if(arr[i]==0&&arr[i-1]==1&&arr[i+1]==1)
        {
           k++;
           arr[i+1]=0;
        }
    }

    printf("%d\n",k);
    return 0;
}
