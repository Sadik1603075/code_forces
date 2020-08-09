#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100];

int main()
{
    ll n,t,i,m,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ok=0;
        ll zor=0;
        ll bizor=0;

        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if(i%2 ==arr[i]%2)
            {
                ok++;
                continue;
            }
            if(arr[i]%2==0)
                zor++;
            else
                bizor++;
        }
        if(ok==n)
        {
            printf("0\n");
        }
        else
        {
            if(zor==bizor)
                cout<<zor<<endl;
            else
                printf("-1\n");
        }


    }
    return 0;
}

