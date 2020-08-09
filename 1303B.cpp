#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,t,n,g,b,k,l;

    cin>>t;

    while(t--)
    {
        scanf("%lld%lld%lld",&n,&g,&b);
        if(n%2==0)
        {
            k = n/2;
        }
        else
        {
            k = n/2 + 1;
        }
        long long sum=0;



        if(g>=k)
        {
            sum +=k;
            sum += (n-k);
            printf("%lld\n",sum);
            continue;
        }
        if(k%g==0)
        {
            l = k/g;
            sum +=(l*g);
            l--;

            sum +=(b*l);
            if(sum<n)
            {
                sum +=(n-sum);
            }
            cout<<sum<<endl;
        }
        else
        {
            l = k/g + 1;
            sum += (g*(l-1));
            k -= (g*(l-1));
            sum += (b*(l-1));
            sum +=k;
            if(sum<n)
            {
                sum +=(n-sum);
            }
            cout<<sum<<endl;

        }


    }
}
