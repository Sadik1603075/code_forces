#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[103];
vector<ll>v;


int main()
{
    ll t,i,n,k,j;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=1;i<=n*2;i++)
        {
            scanf("%lld",&k);

            arr[k]++;

            if(arr[k]==1)
                v.push_back(k);

        }
        for(i=0;i<v.size();i++)
            printf("%lld ",v[i]);
        printf("\n");

        v.clear();
        memset(arr,0,sizeof(arr));


    }
    return 0;
}

