#include<bits/stdc++.h>
using namespace std;
#define ll long long
deque<ll>candy;


int main()
{
    ll t,n,i,j,val;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&val);
            candy.push_back(val);
        }
        i = 1;
        ll prev=0,a=0,b=0,sum=0;
        while(candy.size())
        {
            sum=0;
            if(i%2==1)
            {
               while(1)
               {
                   if(candy.size()==0)break;
                   if(sum>prev)
                    break;

                   sum += candy.front();
                   candy.pop_front();
               }
               prev = sum;
               a +=sum;
               i++;
            }
            else
            {
                while(1)
               {
                   if(candy.size()==0)break;
                   if(sum>prev)
                    break;

                   sum += candy.back();
                   candy.pop_back();
               }
               prev = sum;
               b +=sum;
               i++;
            }
        }
        printf("%lld %lld %lld\n",i-1,a,b);


    }
    return 0;
}

