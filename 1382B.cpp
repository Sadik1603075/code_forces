#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100003];

int main()
{
    ll t,i,n,j,c=0,all=0;
    cin>>t;

    while(t--)
    {
        c=0;
        all=0;
        scanf("%lld",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);

            if(arr[i]==1)
                c++;
            if(arr[i]>1)
                all++;


        }
        if(n==1)
        {
             printf("First\n");
            continue;
        }
        if(c==n)
        {
            if(n%2==0)
            {
                printf("Second\n");
            }
            else
            {
                printf("First\n");
            }
            continue;
        }
        else if(all==n)
        {
            printf("First\n");
             continue;
        }
        else if(all==n-1 && arr[1]==1)
        {
             printf("Second\n");
             continue;
        }
        ll player=1;
        c=0;
        bool c1=0;
         for(i=1;i<=n;i++)
         {
             if(arr[i]==1)
             {
                 c1 ^=1;
             }
             else
                break;
         }
         if(c1==0)
         {
             printf("First\n");
         }
         else
         {
             printf("Second\n");
         }



    }
}

