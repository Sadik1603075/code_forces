#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100005];

int main()
{
    ll t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        sort(arr+1,arr+n+1);
        arr[n+1] =0;
        for(i=n-1;i>=0;i--)
        {
            arr[i] = arr[i] + arr[i+1];
        }
        for(i=1;i<=n;i++)
        {
            printf("%lld ",arr[i]);
        }
        printf("\n");


        ll j=1,sum=0;
        for(i=n;i>=1;i--)
        {
            if(arr[i]/j>=x)
            {
                sum++;
            }
            else
                break;
            j++;
        }
        cout<<sum<<endl;
        memset(arr,0,sizeof(arr));

    }
    return 0;
}
