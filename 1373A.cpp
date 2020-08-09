#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1005];

int main()
{
    ll t,n,i,j,a,b,c;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c;

        if(a >c)
        {
            printf("-1 %lld\n",b);
            continue;
        }
        else if( a == c && b==1)
        {
           printf("-1 -1\n");
           continue;
        }
        else if(a==c)
        {
            printf("-1 %lld\n",b);
            continue;
        }

        printf("1 ");

        if(b==1 && c>= a)
        {
            printf("-1\n");
        }
        else if( a*b <= c)
        {
             printf("-1\n");
        }
        else
        {
            printf("%lld\n",b);
        }




    }
    return 0;
}



