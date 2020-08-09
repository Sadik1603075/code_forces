#include<bits/stdc++.h>
using namespace std;
long long arr[100005];

int main()
{
    long long i,j,t,n,k,l,mini,maxi,lo,hi,mid,c=0;

    cin>>t;

    while(t--)
    {
        mini = INT_MAX;
        maxi =0;
        c=0;
        cin>>n;

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&l);
            arr[i]=l;
        }

        for(i=1;i<=n;i++)
        {
            if(arr[i]==-1)
            {
                if(i+1 <= n && arr[i+1]!=-1 )
                {
                    mini = min(mini,arr[i+1]);
                    maxi = max(maxi,arr[i+1]);
                }
                if(i-1>=1 && arr[i-1] != -1)
                {
                    mini = min(mini,arr[i-1]);
                    maxi = max(maxi,arr[i-1]);
                }

            }
            else
            {
                c++;
            }
        }

        if(c==0)
        {
            printf("0 5\n");
            continue;
        }


        lo = mini;
        hi = maxi;

        mid = (lo+hi)/2;

       k = mid -lo;
       j = hi -mid;
       l = max(k,j);

       for(i=1;i<n;i++)
       {
           if(arr[i]==-1)
           {
               arr[i]=mid;
           }
           if(arr[i+1]==-1)
           {
               arr[i+1] =mid;
           }
           k = abs(arr[i+1]-arr[i]);



           l = max(l,k);
       }

       printf("%lld %lld\n",l,mid);






    }

}



