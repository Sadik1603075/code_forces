#include<bits/stdc++.h>
using namespace std;
#define ll long long
deque<ll>candy;
int arr[8009];
int csum[8009];

bool ans[8009][8009];


int main()
{
    int t,n,i,j,val;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&val);
            arr[i]=val;
        }
        csum[0]=0;
        for(i=1;i<=n;i++)
        {
            csum[i] = csum[i-1]+arr[i];
        }

        for(i=3;i<=n;i++)
        {
            for(j=1;j<=i-2;j++)
            {
                int l = csum[i]-csum[j];
                if(l<=n)
                 ans[i][l] = 1;
            }
        }
        memset(csum,0,sizeof(csum));

        for(i=n;i>=1;i--)
            csum[i] = csum[i+1]+arr[i];

        for(i=n-2;i>=1;i--)
        {
            for(j=n;j>=i+2;j--)
            {
                int l = csum[i]-csum[j];
                if(l<=n)
                ans[i][l] = 1;
            }
        }
        int sum=0;
        for(i=1;i<=n;i++)
        {
            if(ans[i][arr[i]]==1)
                {
                    sum++;
                }
        }
        cout<<sum<<endl;



    }
    return 0;
}


