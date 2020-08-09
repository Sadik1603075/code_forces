#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];

int main()
{
    ll t,n,i,j,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;

        if(n==1 || m==1)
        {
            printf("YES\n");

        }
        else if(n==2 && m==2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}
