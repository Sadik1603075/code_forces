#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1005];

int main()
{
    ll i,j,n,t,m;
    cin>>t;

    while(t--)
    {
        scanf("%lld",&n);

        if(n%2==0)
        {
            cout<<(n/2)-1<<endl;
        }
        else
        {
            cout<<n/2<<endl;
        }

    }
    return 0;
}
