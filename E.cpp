#include<bits/stdc++.h>
using namespace std;

#define ll long long

int arr[100005];
ll diff[100005];
vector<ll>v;

int main()
{
    int i,j,n,c=0,sum=0;
    int k,l,m;
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(i>1)
        sum +=abs(arr[i]-arr[i-1]);
    }

    if(sum%(n-1)==0)
    {
        sum = sum/(n-1);
    }
    else
    {
        sum = sum/(n-1) +1;
    }
    cout<<sum<<endl;
    if(sum==0)
    {
        printf("0\n");
        return 0;
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            c+=0;
        }
        else if((arr[i]+sum)==arr[i+1])
        {
            c+=0;
        }
        else if((arr[i]-sum)==arr[i+1])
        {
            c+=0;
        }
        else if((arr[i]-1)-sum==arr[i+1])
        {
            c++;
        }
        else if((arr[i]+1)-sum==arr[i+1])
        {
            c++;
        }
        else if((arr[i]-1)+sum==arr[i+1])
        {
            c++;
        }
        else if((arr[i]+1)+sum==arr[i+1])
        {
           c++;
        }
        else if((arr[i]+1)+sum==arr[i+1]-1)
            c++;
        else if((arr[i]-1)+sum==arr[i+1]+1)
            c++;
        else if((arr[i]+1)-sum==arr[i+1]-1)
            c++;
        else if((arr[i]-1)-sum==arr[i+1]+1)
            c++;
        else
        {
             printf("-1\n");
            return 0;
        }

    }

    cout<<c<<endl;
    return 0;
}

