#include<bits/stdc++.h>
using namespace std;
#define ll long long

int arr[1005][5];

int main()
{
    int t,n,i,p,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool ok=1;

        scanf("%d%d",&arr[1][0],&arr[1][1]);

          if(arr[1][0]>=arr[1][1])
          {
              ok &=1;
          }
          else
              ok &=0;

        for(i=2;i<=n;i++)
        {
            scanf("%d%d",&arr[i][0],&arr[i][1]);

            if(arr[i][0]>=arr[i-1][0]&& arr[i][1]>=arr[i-1][1] && arr[i][0]-arr[i-1][0]>=arr[i][1]-arr[i-1][1])
                ok &=1;
            else
               ok &=0;
        }

        if(ok)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }


    }
    return 0;
}

