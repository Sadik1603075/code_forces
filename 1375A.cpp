#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[103];

int main()
{
    ll t,i,n,k;
    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
        }


        for(i=1;i<=n;i++)
        {
            if(i%2)
                arr[i] = abs(arr[i])*-1;
            else
                arr[i] = abs(arr[i]);
            printf("%lld ",arr[i]);
        }
        cout<<endl;


    }
    return 0;
}

