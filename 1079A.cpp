#include<bits/stdc++.h>
using namespace std;
int arr[105];
vector<int>v;
int main()
{
    int i,j,k,l,n,c=0,x=0,sum=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>l;
        arr[l]++;
        if(arr[l]>x)
            x = arr[l];
    }
    for(i=1;i<=100;i++)
    {
        if(x%k==0)
        {
            break;
        }
        else
        {
            x++;
        }
    }
    for(i=0;i<=100;i++)
    {
        if(arr[i]>0)
        {
            c++;
            v.push_back(arr[i]);
        }
    }
    for(i=0;i<v.size();i++)
    {
        sum+=(x-v[i]);
    }
    cout<<sum<<endl;
}
