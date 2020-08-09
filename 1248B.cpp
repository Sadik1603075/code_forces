#include<bits/stdc++.h>
using namespace std;

int arr[1000006];

int main()
{
    int i,j,k,l,n,t;

    cin>>n;
    long long x=0,y=0,x1=0,y1=0,ans1=0,ans2=0,x3=0,y3=0,ans3=0,m;

    for(k=1;k<=n;k++)
    {
        scanf("%d",&arr[k]);
    }
    sort(arr+1,arr+n);




    for(i=1,j=n;i<=n/2;i++,j--)
    {
        y+=arr[j];
        x+=arr[i];

        x1+=arr[j];
        y1+=arr[i];

        if(i%2==1)
        {
            y3+=arr[i];
        }
        else
        {
            x3+=arr[i];
        }
    }




    if(n%2==1)
    {
        j = n/2 + 1 ;
        y += arr[j];
        x1+= arr[j];

        for(i=j;i<=n;i++)
        {
            if(i%3==1)
                x3+=arr[i];
            else
                y3+=arr[i];
        }
    }
    else
    {
         j = n/2 + 1 ;

         for(i=j;i<=n;i++)
        {
            if(i%3==0)
                x3+=arr[i];
            else
                y3+=arr[i];
        }

    }
    ans1 = x*x+y*y;
    ans2 = x1*x1+y1*y1;
     ans3 = x3*x3 + y3*y3;

    if(n==3)
    {
        j =(arr[3]+arr[2]);
        ans3 = j*j + arr[1]*arr[1];
    }

    m = max(ans1,ans2);
    m = max(m,ans3);
    cout<<m<<endl;
    return 0;

}
