#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1005];

int main()
{
    ll t,n,i,j,l,ev,od,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;


        ev = 2*(k-1);
        od = (k-1);

        l = n - ev;

        if(l%2==0 && l>0)
        {
            printf("YES\n");
            for(i=1;i<k;i++)
            {
                printf("2 ");
            }
            printf("%lld\n",l);
            continue;
        }
        l = n- od;
        if(l%2==1 && l>0)
        {
            printf("YES\n");
            for(i=1;i<k;i++)
            {
                printf("1 ");
            }
            printf("%lld\n",l);
            continue;

        }

        printf("NO\n");



    }
    return 0;
}

