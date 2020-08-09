#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
    ll i,j,k,l,n,m,t;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        if(n%2==1 && k%2==1)
        {
            if(k<=sqrt(n))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if(n%2==0 && k%2==0)
        {
            if(k<=sqrt(n))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }

    }


    return 0;
}
