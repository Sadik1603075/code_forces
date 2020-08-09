#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[105];


int main()
{
    ll t,n,i,j,k,m;
    cin>>t;
    //cout<<sqrt(1000000000)<<endl;
    while(t--)
    {
      cin>>n>>k;

      ll x = sqrt(n);

      if(k>=n)
        j=n;
      else if(x>k)
        j = k;
      else
        j = x;

        for(i=j;i>=1;i--)
        {
            if(n%i==0)
            {
                if(i==1 || i==n)
                printf("%lld\n",n/i);
                else
                {
                  m = n/i;
                     printf("%lld\n",n/m);
                }
                break;
            }
        }

    }
}



