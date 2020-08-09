#include<bits/stdc++.h>
using namespace std;
int arr[2*100005];

int main()
{

    int i,j,k,l,m,n,t;

    cin>>t;

    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        l=0;
       for(i=1,j=2;i<n;i++,j++)
       {
           m = abs(arr[i]-arr[j]);

           if(m>=2)
           {
               printf("YES\n");
               printf("%d %d\n",i,j);
               l=1;
               break;
           }
       }
       if(l==0)
       {
           printf("NO\n");
       }

    }
    return 0;
}
