#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[200005];

int main()
{
    ll i,j,k,l,m,n;
    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(k==0)
    {
        if(arr[k]==1)
        printf("-1\n");
        else
            cout<<arr[k]-1<<endl;
        return 0;
    }


    if(arr[k-1]==arr[k])
    {
         printf("-1\n");
    }
    else
    {
        cout<<arr[k-1]<<endl;
    }
    return 0;
}
