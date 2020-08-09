#include<bits/stdc++.h>
using namespace std;

int arr[2*100005];



int main()
{
    int n,i,j,k,l,ans=0;
    long long sumev=0,sumodd=0,sum=0,l1,l2;

    cin>>n;
    for(i=1;i<=n;i++)
    {
       scanf("%d",&arr[i]);

    }
    if(n==1)
    {
        cout<<0<<endl;
        return 0;
    }


       int c=0;

    for(i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                sumodd+=arr[i];
            }
            else
            {
                sumev += arr[i];
            }

        }
    if(sumev==sumodd)
        c++;




    for(i=2;i<=n;i++)
    {

        if(i%2==0)
        {
            sumodd -=arr[i];
            sumodd +=arr[i-1];
        }
        else
        {
            sumev -=arr[i];
            sumev+=arr[i-1];
        }

        if(sumev==sumodd)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
