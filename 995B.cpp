#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll arr[20];
ll tmp[20];

int main()
{
    int i,j;
    ll l,m,n,sum=0,maxx=0,k;
    for(i=1;i<=14;i++)
    {
        scanf("%lld",&arr[i]);
    }

    for( i=1;i<=14;i++)
    {
        sum=0;
        for(j=1;j<=14;j++)
            tmp[j] = arr[j];
        k = arr[i];
        tmp[i]=0;
        m = k/14;
        n = k%14;
        if(m==0&&n==0)
        {
            continue;

        }
        else if(m!=0&&n==0)
        {

        for(j=1;j<=14;j++)
            {
                tmp[j]+=m;
                if(tmp[j]%2==0)
                    sum+=tmp[j];
            }
            maxx= max(maxx,sum);
        }
        else if(m==0&&n!=0)
        {

            sum=0;
            l=n;


            for(j=i+1;j<=14;j++)
            {
                if(l==0)
                    break;
               tmp[j]+=1;
               l--;
            }

            if(l!=0)
            {
                for(j=1;j<=l;j++)
                {
                    tmp[j]+=1;
                }
            }
            for(j=1;j<=14;j++)
            {
                if(tmp[j]%2==0)
                    sum+=tmp[j];
            }
            maxx= max(maxx,sum);
        }
        else
        {
            for(j=1;j<=14;j++)
            {
                tmp[j]+=m;
            }
            sum=0;
            l=n;

            for(j=i+1;j<=14;j++)
            {
                if(l==0)
                    break;
               tmp[j]+=1;
               l--;
            }
            if(l!=0)
            {
                for(j=1;j<=l;j++)
                {
                    tmp[j]+=1;
                }
            }
            for(j=1;j<=14;j++)
            {
                if(tmp[j]%2==0)
                    sum+=tmp[j];
            }
            maxx= max(maxx,sum);

        }
        //cout<<maxx<<endl;
    }
    cout<<maxx<<endl;
}
