#include<bits/stdc++.h>
using namespace std;
int arr[105];



int main()
{
    int i,j,k,l,n,t,ans;
    cin>>t;

    while(t--)
    {
        cin>>n;
        ans=1;

        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        for(i=0;i<n-1;i++)
        {
            if(arr[i+1]<arr[i])
            {
                ans =0;
                break;
            }
        }
        if(ans)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
