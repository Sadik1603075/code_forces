#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[65005];


int main()
{
    ll t,i,n,j,x,sum;
    cin>>n;
    string s;
    cin>>s;
    sum=0;
    for(i=0;i<n;i++)
    {
        x = s[i]-'0';

        if(x%2==0)
        {
            sum++;
            arr[i]=sum;
        }
        else
            arr[i]=sum;
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        x = s[i]-'0';
        if(x%2==0)
        {
            sum += arr[n-1]-arr[i]+1;
        }
        else
        {
            sum +=arr[n-1]-arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}

