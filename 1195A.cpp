#include<bits/stdc++.h>
using namespace std;

int arr[1005];

int main()
{
    int n,k,l,i,j,sum=0,use =0,d;
    cin>>n>>k;

    for (i=0;i<n;i++)
    {
        scanf("%d",&l);
        arr[l]++;
    }

    for(i=1;i<=k;i++)
    {
        d =(arr[i])/2;
        arr[i] -= d*2;
        sum+=d*2;
        use +=d;
    }

    int can;
    if(n%2==0)
    {
        can = n/2;
    }
    else
    {
        can = n/2 +1;
    }

    for(i=1 ;i<=k ;i++)
    {
        if(arr[i]!=0)
        {
            if(can==use)
                break;
            sum++;
            use ++;
        }
    }
    cout<<sum<<endl;
    return 0;

}
