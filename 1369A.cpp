#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[1003];

int main()
{
    ll n,t,i,j;
    cin>>t;

    while(t--)
    {
        cin>>n;
        i=n/2;

        if(n%2)
        {
            printf("NO\n");
        }
        else if(i%2==0)
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

