#include<bits/stdc++.h>
using namespace std;
vector<int>v;
long long arr[2*100005],mx=0,total=0,mx1=0,fre[1000006];

int main()
{
    long long i,j,k,l=0,n,m,t2=0,k1=-1,c=0,f=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        scanf("%I64d",&arr[i]);
        total+=arr[i];
        fre[i]=arr[i];
    }
    sort(arr+1,arr+n+1);

    for(i=1; i<=n; i++)
    {
        if(fre[i]!=arr[n])
        {
            if(total-fre[i]-arr[n]==arr[n])
            {
                v.push_back(i);
            }
        }
        else
        {
            if(total-fre[i]-arr[n-1]==arr[n-1])
                v.push_back(i);
        }
    }
    l=v.size();
    cout<<l<<endl;

    for(i=0; i<v.size(); i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");
    return 0;
}
